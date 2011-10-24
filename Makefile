#
# Makefile for linux sfs
#

KERNEL_SOURCE := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C ${KERNEL_SOURCE} M=$(PWD) modules

clean :
	$(MAKE) -C ${KERNEL_SOURCE} M=$(PWD) clean
