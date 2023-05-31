#include <linux/init.h>   /* Needed for module_init */
#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */

static int __init entrypoint(void) {
    printk(KERN_INFO "Hello World!\n");
    return 0;
}

static void __exit exitpoint(void) {
    printk(KERN_INFO "Goodbye world!\n");
}

module_init(entrypoint);
module_exit(exitpoint);