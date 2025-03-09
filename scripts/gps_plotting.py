
from pyvrs.reader import SyncVRSReader
import sys



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



    for gps_record, imu_record in zip(gps_reader, imu_reader):

        pass
        pass





    info = reader.get_stream_info(IMU_SLOW)
    print(info)

    




if __name__ == "__main__":
    main()


