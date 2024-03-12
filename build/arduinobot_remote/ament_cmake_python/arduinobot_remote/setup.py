from setuptools import find_packages
from setuptools import setup

setup(
    name='arduinobot_remote',
    version='0.0.0',
    packages=find_packages(
        include=('arduinobot_remote', 'arduinobot_remote.*')),
)
