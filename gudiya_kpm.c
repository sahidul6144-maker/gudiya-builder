#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gudiya");
MODULE_DESCRIPTION("Gudiya FF KPM Bypass Module");

static int __init gudiya_init(void) {
    printk(KERN_INFO "Gudiya KPM Loaded Successfully\n");
    return 0;
}

static void __exit gudiya_exit(void) {
    printk(KERN_INFO "Gudiya KPM Unloaded\n");
}

module_init(gudiya_init);
module_exit(gudiya_exit);
