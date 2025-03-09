from setuptools import find_packages
from setuptools import setup

setup(
    name='aria_vtti_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('aria_vtti_interfaces', 'aria_vtti_interfaces.*')),
)
