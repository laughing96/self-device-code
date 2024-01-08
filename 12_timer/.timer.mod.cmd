cmd_/swap/nfs/rootfs/driver/12_timer/timer.mod := printf '%s\n'   timer.o | awk '!x[$$0]++ { print("/swap/nfs/rootfs/driver/12_timer/"$$0) }' > /swap/nfs/rootfs/driver/12_timer/timer.mod
