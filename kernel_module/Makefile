obj-m += translate.o
kernel = /lib/modules/5.15.90.1-microsoft-standard-WSL2+
#Replace hello-world-module with the name of your .c file. You must keep the .o extension

all:
	make -C $(kernel)/build M=$(PWD) modules

clean:
	make -C $(kernel)/build M=$(PWD) clean