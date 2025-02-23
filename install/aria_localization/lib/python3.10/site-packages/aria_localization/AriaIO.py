
from projectaria_tools.core import mps
import numpy as np

class AriaData():


    def __init__(self, *pathnames):
        '''
        pathname format: trajectory .csv file, point cloud .tar.gz archive
        '''


        self.trajectory_path, self.cloud_path = pathnames[:2]

        self.translation_vector = None
        self.rotation_vector = None
        self.id_vector = None
        self.velocity_vector = None
        self.angular_velocity_vector = None

        self.init_trajectory()

        


    def init_trajectory(self):
        """
        Initializes trajectory data as separate time-sequence arrays. This sets up simulated streaming of the data.

        Effective parameters: translation, rotation, id, velocity, angular velocity vectors, trajectory path name
            

        
        """

        path = self.trajectory_path

        trajectory = mps.read_closed_loop_trajectory(path)

        translations = []
        rotations = []
        ids = []
        velocities = []
        angular_velocities = []


        for pose in trajectory:

            uid = pose.graph_uid
            timestamp = pose.tracking_timestamp
            quality = pose.quality_score

        
            translation = pose.transform_world_device.translation()
            rotation = pose.transform_world_device.rotation().to_quat()

        

            translations.append(translation)
            rotations.append(rotation)
            ids.append([uid,timestamp,quality])
            
        
        self.translation_vector = np.array(translations).reshape(-1,3)
        self.rotation_vector = np.array(rotations).reshape(-1,4)

    def init_cloud(self):
        '''
        Initializes the cloud as an accessable entity. The cloud will be provided in full a-priori to the server.
        '''

        path = self.cloud_path

        # TODO finish cloud initialization






def test():

  # todo add ros parameters for path, frequency
    trajectory_path = "/home/joe/vt/vtti/aria_sandbox/office1_data/trajectory/closed_loop_trajectory.csv"
    cloud_path = "/home/joe/vt/vtti/aria_sandbox/office1_data/trajectory/semidense_points.csv.gz"
    data = AriaData(trajectory_path, cloud_path)

    print(f"data: {data.translation_vector[0,1]}")
       


if __name__ == "__main__":
    test()
    








