
from pyvrs.reader import SyncVRSReader
import matplotlib.pyplot as plt
import sys
import math




"""
Script for debugging and visualizing VRS files.

Usage: python3 gps_plotting.py <path_to_vrs_file>



"""

GPS_STREAM_ID = '281-1'
GPS_APP_STREAM_ID = '281-2'
IMU_FAST = '1202-1'
IMU_SLOW = '1202-2'


def get_gps_data(gps_reader):
    '''
    returns (lats, lons, accuracies)
    '''
    if gps_reader == None:
        return None, None, None
    # create data lists
    latitudes = []
    longitudes = []
    accuracies = []

    # parse vrs file
    for gps_record in gps_reader:

        
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
    
    return (latitudes, longitudes, accuracies)




def main():

    if len(sys.argv) < 2:
        print("need VRS file")
        sys.exit(1)

    vrs_path = sys.argv[1]
    vrs_path_2 = None

    vrs_compare = False
    if len(sys.argv) > 2:
        vrs_path_2 = sys.argv[2]
        vrs_compare = True

    
    
    # create reader for GPS data
    reader = SyncVRSReader(vrs_path)
    reader2 = None
    if vrs_compare:
        reader2 = SyncVRSReader(vrs_path_2)


    # create GPS filtered reader
    gps_reader1 = reader.filtered_by_fields(stream_ids=GPS_STREAM_ID, record_types='data')
    imu_reader = reader.filtered_by_fields(stream_ids=IMU_SLOW, record_types='data')

    gps_reader2 = None
    if vrs_compare:
        gps_reader2 = reader2.filtered_by_fields(stream_ids=GPS_STREAM_ID, record_types='data')

    longitudes_1, latitudes_1, accuracies_1 = get_gps_data(gps_reader1)
    longitudes_2, latitudes_2, accuracies_2 = get_gps_data(gps_reader2)

    # plot positions
    if vrs_compare:
        plot_positions(latitudes_1, longitudes_1,lat2=latitudes_2, lon2=longitudes_2)
    

    # plot accuracies
    #plot_accuracy(accuracies_1)

    #plot by meter
    ew_meters, ns_meters = get_lat_lon_meters(latitudes_1, longitudes_1)
    plot_positions(ew_meters, ns_meters, scale='meters')

    info = reader.get_stream_info(IMU_SLOW)
    print(info)

    return



def plot_positions(latitudes,longitudes, lat2=None, lon2=None, scale='GPS'):

    plt.figure(figsize=(10,6))
    plt.scatter(longitudes, latitudes, c='blue', marker='o', label='GPS Readings')

    # plot the second set of points if provided
    if lon2 is not None and lat2 is not None:
        plt.scatter(lon2, lat2, c='red', marker='x', label='GPS Readings 2')

    if scale == 'GPS':
        plt.xlabel('longitude')
        plt.ylabel('latitude')
    elif scale == 'meters':
        plt.xlabel('east-west (meters)')
        plt.ylabel('north-south (meters)')
    plt.legend()
    plt.grid(True)
    plt.show()

def plot_accuracy(accuracies):
    plt.figure(figsize=(10,6))
    plt.hist(accuracies, bins=20, color='green', edgecolor='black')
    plt.title('GPS accuracy distribution')
    plt.xlabel('Accuracy')
    plt.ylabel('Frequency')
    plt.show()


def measure_lat_long(lat1, lon1, lat2, lon2):
    R = 6378.137
    dLat = lat2 * math.pi / 180 - lat1 * math.pi / 180
    dLon = lon2 * math.pi / 180 - lon1 * math.pi / 180
    a = math.sin(dLat/2) * math.sin(dLon/2) + math.cos(lat1 * math.pi / 180) * math.cos(lat2 * math.pi / 180) * math.sin(dLon/2) ** 2
    c = 2 * math.atan2(math.sqrt(a), math.sqrt(1-a))
    d = R * c
    return d * 1000

    
def latlon_to_xy(lat_ref, lon_ref, lat, lon):
    delta_lat = lat - lat_ref
    delta_lon = lon - lon_ref
    y = delta_lat * 111195  # meters
    x = delta_lon * 111195 * math.cos(math.radians(lat_ref))
    return x, y


def get_lat_lon_meters(latitudes, longitudes):

    base_lat = latitudes[0]
    base_lon = longitudes[0]

    ew_meters = [] # east/west
    ns_meters = [] # north/south

    for lat, lon in zip(latitudes, longitudes):
        x,y = latlon_to_xy(base_lat, base_lon, lat, lon)
        ew_meters.append(x)
        ns_meters.append(y)

    return ew_meters, ns_meters

        
        
if __name__ == "__main__":
    main()

