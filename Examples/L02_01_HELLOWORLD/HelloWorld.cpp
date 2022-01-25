#include <stdio.h>

int sayHello()
{
	printf("Hello World\n");
	return 0;
}

/*
函数:sayHellpforManyTimes
用途：重复地在屏幕上输出Hello,World
参数:  int times, 用于说明输出的次数
返回值：int, 返回0表示成功执行完毕
*/
int sayHelloForManyTimes(int times)
{
	for (int i = 0; i < times; i++)
	{
		sayHello();
	}
	return times;
}

int main()
{
	sayHelloForManyTimes(10);
	return 0;
}