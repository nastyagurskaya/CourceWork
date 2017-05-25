obj-m := pci_bufmem.o

KDIR :=/lib/modules/$(shell uname -r)/build

PWD := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) M=$(PWD) -W modules
	gcc test_bufmem.c -L. -w -o test
clean:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) clean
	rm test
