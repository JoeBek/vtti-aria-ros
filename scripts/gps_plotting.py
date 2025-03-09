
from pyvrs.reader import SyncVRSReader
import matplotlib.pyplot as plt
import sys




"""
Script for debugging and visualizing VRS files.

Usage: python3 gps_plotting.py <path_to_vrs_file>



"""

GPS_STREAM_ID = '281-1'
GPS_APP_STREAM_ID = '281-2'
IMU_FAST = '1202-1'
IMU_SLOW = '1202-2'




def main():

    if len(sys.argv) != 2:
        print("need VRS file")
        sys.exit(1)


    vrs_path = sys.argv[1]

    
    # create reader for GPS data
    reader = SyncVRSReader(vrs_path)


    # create GPS filtered reader
    gps_reader = reader.filtered_by_fields(stream_ids=GPS_STREAM_ID, record_types='data')
    imu_reader = reader.filtered_by_fields(stream_ids=IMU_SLOW, record_types='data')

    # create data lists
    latitudes = []
    longitudes = []
    accuracies = []

    # parse vrs file
    for gps_record, imu_record in zip(gps_reader, imu_reader):

        
        # get data from record
        gps_dict = gps_record.metadata_blocks[0]
        if not gps_dict:
            continue

        latitude = gps_dict['latitude']
        longitude = gps_dict['longitude']
        accuracy = gps_dict['accuracy']

        latitudes.append(latitude)
        longitudes.append(longitude)
        accuracies.append(accuracy)


    # plot positions
    plot_positions(longitudes, latitudes)



    info = reader.get_stream_info(IMU_SLOW)
    print(info)

    
    return



def plot_positions(longitudes, latitudes):
    plt.figure(figsize=(10,6))
    plt.scatter(longitudes, latitudes, c='blue', marker='o', label='GPS Readings')
    plt.xlabel('longitude')
    plt.ylabel('latitude')
    plt.legend()
    plt.grid(True)
    plt.show()




if __name__ == "__main__":
    main()


