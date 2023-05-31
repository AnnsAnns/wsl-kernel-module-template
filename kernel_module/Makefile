obj-m += translate.c
#Replace hello-world-module with the name of your .c file. You must keep the .o extension

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean