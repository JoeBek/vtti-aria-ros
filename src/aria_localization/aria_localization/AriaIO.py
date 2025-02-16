
from projectaria.tools import mps
import numpy as np

class AriaData():


    def __init__(self, *pathnames):


        self.trajectory_path, self.cloud_path = pathnames[:2]

        self.translation_vector = None
        self.rotation_vector = None
        self.id_vector = None
        self.velocity_vector = None
        self.angular_velocity_vector = None

        


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

            uid = pose.session_uid
            timestamp = pose.tracking_timestamp_us
            quality = pose.quality_score

            translation = pose.t_world_device.translation
            rotation = pose.t_world_device.rotation.coeffs()

            translations.append(translation)
            rotations.append(rotation)
            ids.append([uid,timestamp,quality])
            
        
        self.translation_vector = np.array(translations)
        self.rotation_vector = np.array(rotations)

    def init_cloud(self):
        '''
        Initializes the cloud as an accessable entity. The cloud will be provided in full a-priori to the server.
        '''

        path = self.cloud_path

        # TODO finish cloud initialization









