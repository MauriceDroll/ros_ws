from setuptools import find_packages
from setuptools import setup

setup(
    name='select_table_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('select_table_interfaces', 'select_table_interfaces.*')),
)
