#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x3df5362e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfe123f2e, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xcec1f225, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xfb732c13, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xc98cb0e0, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xd6aa1fed, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf8a96516, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6e3acf00, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc171d4f5, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x897f0ccc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd33ee5d5, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf49fee23, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "76D8900A8FFE28571792810");
