#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main()
{
	int file_rx;
	int file_tx;
	char buffer_rx[36];
	char buffer_tx[36];
	char response[36];
	unsigned long addr;
	strcpy(buffer_rx,"123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	strcpy(buffer_tx,"abcdefghijklmnopqrstuvwxyz123456789");
	int len_rx;
	int len_tx;
	file_rx = open("/dev/bufmem",O_RDWR);
	if(!file_rx){
		printf("fd_rx open error\n");
		exit(0);
	}
	file_tx = open("/dev/bufmem",O_RDWR);
	if(!file_tx){
		printf("fd_tx open error\n");
		exit(0);
	}

	len_rx = write(file_rx,buffer_rx,strlen(buffer_rx));
	printf("write len_rx = %d\n",len_rx);
	len_tx = write(file_tx,buffer_tx,strlen(buffer_tx));
	printf("write len_tx = %d\n",len_tx);
	len_rx = read(file_rx,response,36);
	printf("read len_rx = %d\n",len_rx);
	printf("read value rx = %s\n",response);
	len_tx = read(file_tx,response,36);
	printf("read len_tx = %d\n",len_tx);
	printf("read value tx = %s\n",response);
	
	
	ioctl(file_rx,1,&addr);
	printf("addr phys rx is 0x%016lx\n",addr);
	ioctl(file_tx,1,&addr);
	printf("addr phys tx is 0x%016lx\n",addr);

	close(file_rx);
	close(file_tx);
	return 0;
}
