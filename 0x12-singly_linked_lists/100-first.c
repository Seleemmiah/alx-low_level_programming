#include <stdio.h>

/**
 * myStartupFun - apply the constructor att to myStartupFun()
 */
void myStartupFun(void)__attribute__((constructor));

/**
 * myStartupFun - implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must all,\n");
	printf("I bore my house upon my back!\n");
}
