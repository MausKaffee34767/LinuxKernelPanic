#include <linux/kernel.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");

int init_module(void){
    panic("Kernel Panic test");
    return 0;
}
