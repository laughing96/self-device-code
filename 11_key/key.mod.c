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
	{ 0x1d02bfae, "of_find_node_opts_by_path" },
	{ 0x89767a8a, "of_get_named_gpio_flags" },
	{ 0x92997ed8, "_printk" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x69c2f00c, "gpio_to_desc" },
	{ 0x169bfb03, "gpiod_direction_input" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x9bcb7986, "cdev_init" },
	{ 0x85b1fadf, "cdev_add" },
	{ 0xd35112ef, "__class_create" },
	{ 0xb3f70e0e, "device_create" },
	{ 0xfe990052, "gpio_free" },
	{ 0x6f16c8d0, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2d40e5f6, "device_destroy" },
	{ 0x2f37bc0c, "class_destroy" },
	{ 0xd3809896, "gpiod_get_raw_value" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb8308a41, "__current" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5e1991e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd0045521, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5BA52977818CEA55EC2C6EB");
