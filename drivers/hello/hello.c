#include <linux/init.h>
#include <linux/module.h>

int __init hello_init(void)
{
	printk("hello init.\n");
	return 0;
}

void __exit hello_exit(void)
{
	printk("hello exit.\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("HLY");
MODULE_DESCRIPTION("A simplest driver");
MODULE_LICENSE("GPL v2");
