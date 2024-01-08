KERNELDIR := /swap/linux-6.2
CURRENT_PATH := $(shell pwd)

obj-m := timer.o

build: kernel_modules

kernel_modules:
	$(MAKE) -C $(KERNELDIR) M=$(CURRENT_PATH) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(CURRENT_PATH) clean

test:
	$(MAKE) -S $(KERNELDIR) M=$(CURRENT_PATH) modules