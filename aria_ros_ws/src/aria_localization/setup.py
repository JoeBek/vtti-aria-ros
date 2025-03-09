from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'aria_localization'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools',
                      'projectaria.tools'],
    zip_safe=True,
    maintainer='Joe Bekiranov',
    maintainer_email='jb5@vt.edu',
    description='Playback server for Aria data',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'playback_server = aria_localization.playback_server:main'
        ],
    },
)
