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
	{ 0xe2cb511d, "__platform_driver_register" },
	{ 0x69c2f00c, "gpio_to_desc" },
	{ 0xf28caa23, "gpiod_set_raw_value" },
	{ 0x6bc24f5c, "misc_deregister" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb8308a41, "__current" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x92997ed8, "_printk" },
	{ 0x5f754e5a, "memset" },
	{ 0x5e1991e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1d02bfae, "of_find_node_opts_by_path" },
	{ 0x89767a8a, "of_get_named_gpio_flags" },
	{ 0xef9ce835, "gpiod_direction_output_raw" },
	{ 0x9bbafc53, "misc_register" },
	{ 0xd3e10e65, "platform_driver_unregister" },
	{ 0xd0045521, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DA5A48E03A99EDCB7413F96");
