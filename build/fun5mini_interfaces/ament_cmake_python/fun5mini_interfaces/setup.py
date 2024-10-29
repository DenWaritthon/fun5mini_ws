from setuptools import find_packages
from setuptools import setup

setup(
    name='fun5mini_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('fun5mini_interfaces', 'fun5mini_interfaces.*')),
)
