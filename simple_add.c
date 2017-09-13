#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/uaccess.h>
asmlinkage long sys_simple_add(int number1, int number2, int* result)
{
	int num3 = 0;
	printk(KERN_ALERT "%i + %i\n", number1, number2);
 	num3 = number1 + number2;
	copy_to_user(result, &num3, sizeof(int));
	printk(KERN_ALERT "Result is: %d\n", num3);
	printk(KERN_ALERT "Pointer address is: %p\n", result);
 	return 0;
}
