
#include<stdio.h>

void fun1(void)
{
	printf("this is fun1");
	printf("create conflict");
}

void fun2(void)
{
	printf("this is fun2")
}
int main()
{
	fun1();
	fun2();
	return 0;
}