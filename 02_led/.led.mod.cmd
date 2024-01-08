cmd_/swap/nfs/rootfs/driver/02_led/led.mod := printf '%s\n'   led.o | awk '!x[$$0]++ { print("/swap/nfs/rootfs/driver/02_led/"$$0) }' > /swap/nfs/rootfs/driver/02_led/led.mod
