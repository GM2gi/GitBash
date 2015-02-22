#! /bin/bash

	total=$(grep MemTotal /proc/meminfo | cut -c 18-21)
	free=$(grep MemFree /proc/meminfo | cut -c 18-21)
	used=$(expr $total - $free)
	echo "RAM:" $used "MB used /" $total "MB total ( " $free " MB free)"