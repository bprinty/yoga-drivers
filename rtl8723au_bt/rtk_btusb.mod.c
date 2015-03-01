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
	{ 0x9412fa01, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa00a98b4, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2a3a81eb, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd63d8334, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0xb3d51e14, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3323108b, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xc6380896, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x928c2943, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0x90daf366, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x84b0c137, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x68155662, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0xf75bd6c8, __VMLINUX_SYMBOL_STR(device_wakeup_disable) },
	{ 0x4d0d575d, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0xd32d781c, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x7b1415e5, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x41792f22, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x152246b4, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xde75a49b, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x8a66d9a4, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x5fe56825, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xff1076fc, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe0f32c1f, __VMLINUX_SYMBOL_STR(hci_recv_fragment) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6e938e79, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6d0fc37d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xec9526a6, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf85d740e, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xb61a0c3b, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x123f0dc, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xa545e970, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb6ca0c88, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb749ae89, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xae712acd, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x701bfb8, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v0BDAp*d*dc*dsc*dp*icE0isc01ip01in*");

MODULE_INFO(srcversion, "236E2B2455F063F580ADDA9");
