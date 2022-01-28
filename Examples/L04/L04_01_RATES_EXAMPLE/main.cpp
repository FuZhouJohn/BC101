#include <stdio.h>
#include "F:/BC101/Libraries/BOCRates/BOCRates.h"
#pragma comment(lib,"F:/BC101/Libraries/BOCRates/BOCRates.lib")
int main()
{
	double r = ConvertCurrency(1, "JPY", "CNY", 100);
	if (r > 0) 
	{
		printf("%.2f\n", r);

	}
	else
	{
		printf("网络或服务异常\n");
	}
	return 0;
}