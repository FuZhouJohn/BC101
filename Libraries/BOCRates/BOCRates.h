#pragma once
struct EXCHANGE_RATE
{
	char CurrencyCode[4];			//货币代码  
	char CurrencyName[33];			//货币名称(中文)
	char PublishTime[20];			//发布时间
	double BuyingRate = 0;			//现汇买入价
	double CashBuyingRate = 0;		//现钞买入价
	double SellingRate = 0;			//现汇卖出价
	double CashSellingRate = 0;		//现钞卖出价
	double MiddleRate = 0;			//中行折算价
}; 

typedef struct EXCHANGE_RATE ExchangeRate;

double ConvertCurrency(int real, const char* from, const char* to, double amount);
int GetRatesByCode(const char* code, double* rates);
int GetRatesAndCurrencyNameByCode(const char* code, char* name, char* publishTime, double* rates);
int GetRateRecordByCode(const char* code, ExchangeRate* results);
int GetAllRates(ExchangeRate** result);
