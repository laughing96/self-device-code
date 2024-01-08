#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe97c4103, "ioremap" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x92997ed8, "_printk" },
	{ 0x9bcb7986, "cdev_init" },
	{ 0x85b1fadf, "cdev_add" },
	{ 0xd35112ef, "__class_create" },
	{ 0xb3f70e0e, "device_create" },
	{ 0xedc03953, "iounmap" },
	{ 0x6f16c8d0, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2d40e5f6, "device_destroy" },
	{ 0x2f37bc0c, "class_destroy" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb8308a41, "__current" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x5f754e5a, "memset" },
	{ 0x5e1991e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd0045521, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5355C6ABCBDC20A55B7FA5A");
