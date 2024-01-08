cmd_/swap/nfs/rootfs/driver/05_gpioled/gpioled.mod := printf '%s\n'   gpioled.o | awk '!x[$$0]++ { print("/swap/nfs/rootfs/driver/05_gpioled/"$$0) }' > /swap/nfs/rootfs/driver/05_gpioled/gpioled.mod
