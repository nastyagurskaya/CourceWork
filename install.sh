#!/bin/bash
sudo rm -f /dev/bufmem

sudo mknod /dev/bufmem c 60 0
sudo chmod 666 /dev/bufmem
sudo insmod pci_bufmem.ko
./test
sudo rmmod pci_bufmem.ko
sudo rm /dev/bufmem

