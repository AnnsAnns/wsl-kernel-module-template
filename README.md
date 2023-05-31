# wsl-kernel-module

A simple WSL kernel module meant as a demonstration on how to develop linux kernel modules under WSL.

## Version

This was developed for WSL2 Kernel 5.15.19.X but should work on all versions as long as you up/downgrade the submodule.

## How to use

Please note that you might have to change the WSL submodule branch depending on your WSL instance. It should match whatever is returned when typing:

```bash
uname -r
```

---

### Compile / Configure Kernel

Copy your config over:
```bash
zcat /proc/config.gz > .config
```

Compile the kernel:
```bash
make -j $(nproc)
```

Install:
```bash
sudo make -j $(nproc) modules_install
```

---

### Compile Module

```bash
cd kernel_module
make
```

---

Congratulations, you should now have a working kernel module called main.ko. Try loading it via:
```bash
sudo insmod main.ko
```
and look at what it prints via:
```bash
dmesg
```