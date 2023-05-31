#include <linux/init.h>   /* Needed for module_init */
#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */

MODULE_LICENSE("MIT");

static int __init hello_world(void)
{
    printk(KERN_INFO "Hello World!\n");
    return 0;
}

static void __exit goodbye_world(void)
{
    printk(KERN_INFO "Goodbye world!\n");
}

module_init(hello_world);
module_exit(goodbye_world);