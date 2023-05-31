obj-m += main.o
kernel = /lib/modules/5.15.90.1-microsoft-standard-WSL2+
all:
	make -C $(kernel)/build M=$(PWD) modules

clean:
	make -C $(kernel)/build M=$(PWD) clean