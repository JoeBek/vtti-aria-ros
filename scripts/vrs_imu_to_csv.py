
import csv
from pyvrs.reader import SyncVRSReader
import matplotlib.pyplot as plt
import sys
import math
import argparse
import os


IMU_FAST = '1202-1'
IMU_SLOW = '1202-2'


def get_imu_data(imu_reader):

    accel = []
    gyro = []
    mag = []

    for record in imu_reader:

        imu_dict = record.metadata_blocks[0]
        if not imu_dict:
            continue

        accelerometer_reading = imu_dict["accelerometer"]
        gyro_reading = imu_dict["gyroscope"]
        mag_reading = imu_dict["magnetometer"]
        accel.append(accelerometer_reading)
        gyro.append(gyro_reading)
        mag.append(mag_reading)

    return (accel, gyro, mag)


def write_to_csv(accel, gyro, mag, filename):

    rows = []
    for a, g, m in zip(accel, gyro, mag):
        rows.append(a + g + m)  # append records together

    # Write to CSV
    with open(filename, mode='w', newline='') as file:
        writer = csv.writer(file)
        # Write header
        writer.writerow(['Accel_X', 'Accel_Y', 'Accel_Z', 'Gyro_X', 'Gyro_Y', 'Gyro_Z', 'Mag_X', 'Mag_Y', 'Mag_Z'])
        # Write data rows
        writer.writerows(rows)


# erase n out of every m values from a list
def make_sparse(data, n=4, m=5):
    return [x for i,x in enumerate(data) if (i % m) >= n]



def main():

    script_path = os.path.abspath(__file__)
    script_dir = os.path.dirname(script_path)
    parser = argparse.ArgumentParser(description="Process VRS IMU data and export to CSV.")
    
    # Add arguments
    parser.add_argument("--input","-i",required=True, help="Path to the input VRS file.")
    parser.add_argument("--output", "-o", required=False,default=f"{script_dir}/imu.csv", help="Path to the output CSV file.")
    parser.add_argument("--imu", required=False, default="fast", help="Imu to use: [fast | slow]")
    parser.add_argument("--sparse", "-s", action="store_true", help="Enable sparse collection (defualt false)")
    parser.add_argument("--percent", "-p", type=int, required=False, default=100, help="percent of records to keep (default 100)")

    
    # Parse the arguments
    args = parser.parse_args()
    
    # Access the arguments
    input_path = args.input
    output_path = args.output
    
    print(f"Input file: {input_path}")
    print(f"Output file: {output_path}")
    


    reader = SyncVRSReader(input_path)
    imu_reader_fast = reader.filtered_by_fields(stream_ids=IMU_FAST, record_types='data')
    imu_reader_slow = reader.filtered_by_fields(stream_ids=IMU_SLOW, record_types='data')

    imu_data_slow = get_imu_data(imu_reader_slow)
    imu_data_fast = get_imu_data(imu_reader_fast)


    imu = args.imu
    percent = args.percent
    sparse = args.sparse

    a, g, m = (None, None, None)
    if imu == 'fast':
        a, g, m = imu_data_fast
    elif imu == 'slow':
        a, g, m = imu_data_slow

    if sparse:
        a = make_sparse(a)
        g = make_sparse(g)
        m = make_sparse(m)

    ratio = percent / 100
    length = len(a)

    clip_index = int(length * ratio)
    a = a[:clip_index]
    g = g[:clip_index]
    m = m[:clip_index]


    write_to_csv(a,g,m,output_path)
    return
    




if __name__ == "__main__":
    main()

