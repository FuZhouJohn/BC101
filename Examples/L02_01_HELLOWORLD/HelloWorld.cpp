#include <stdio.h>

int sayHello()
{
	printf("Hello World\n");
	return 0;
}

/*
����:sayHellpforManyTimes
��;���ظ�������Ļ�����Hello,World
����:  int times, ����˵������Ĵ���
����ֵ��int, ����0��ʾ�ɹ�ִ�����
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