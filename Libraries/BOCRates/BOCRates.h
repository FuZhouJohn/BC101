#pragma once
struct EXCHANGE_RATE
{
	char CurrencyCode[4];			//���Ҵ���  
	char CurrencyName[33];			//��������(����)
	char PublishTime[20];			//����ʱ��
	double BuyingRate = 0;			//�ֻ������
	double CashBuyingRate = 0;		//�ֳ������
	double SellingRate = 0;			//�ֻ�������
	double CashSellingRate = 0;		//�ֳ�������
	double MiddleRate = 0;			//���������
}; 

typedef struct EXCHANGE_RATE ExchangeRate;

double ConvertCurrency(int real, const char* from, const char* to, double amount);
int GetRatesByCode(const char* code, double* rates);
int GetRatesAndCurrencyNameByCode(const char* code, char* name, char* publishTime, double* rates);
int GetRateRecordByCode(const char* code, ExchangeRate* results);
int GetAllRates(ExchangeRate** result);
