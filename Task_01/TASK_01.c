#include<linux/module.h>  
#include<linux/init.h>


int __init_module(void)
{
	printk(KERN_INFO"Hello World!\n");
	return 0;
}

void __cleanup_module(void)
{
	printk(KERN_INFO"module removed\n ");
}

module_init(__init_module);
module_exit(__cleanup_module);

/*Kernel module Comments*/
MODULE_AUTHOR("Satej");
MODULE_DESCRIPTION("Template");
MODULE_LICENSE("GPL");
