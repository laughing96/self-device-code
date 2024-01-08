cmd_/swap/nfs/rootfs/driver/11_key/key.mod := printf '%s\n'   key.o | awk '!x[$$0]++ { print("/swap/nfs/rootfs/driver/11_key/"$$0) }' > /swap/nfs/rootfs/driver/11_key/key.mod
