
#include<stdio.h>

void fun1(void)
{
	printf("this is fun1");
	printf("create conflict");
	printf("rebase");
}

void fun2(void)
{
	printf("this is fun2");
	printf("create conflict 2");
}
int main()
{
	fun1();
	fun2();
	return 0;
}