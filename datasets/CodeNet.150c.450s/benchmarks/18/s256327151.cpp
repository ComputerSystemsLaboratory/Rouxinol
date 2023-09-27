#include <iostream>
using namespace std;

void test();
int interest(int debt, double interest_rate,int n);

int main(void)
{
	test();
	return 0;
}

void test()
{
	long long debt;
	int n;
	debt = 100000;
	cin >> n;

	debt = interest(debt, 1.05, n) ;
	
	cout << debt << endl;
}

int interest(int debt, double interest_rate,int n)
{

	if (n == 1)
	{	
		int intedebt = debt*interest_rate;
		if((intedebt%1000) != 0)
			return intedebt - intedebt%1000 + 1000;
		else
		{
			return intedebt;
		}
	}
	else
	{
		int func_intedebt = interest(debt, interest_rate, n - 1) * interest_rate;
		if ((func_intedebt % 1000) != 0)
			return func_intedebt - func_intedebt % 1000 + 1000;
		else
			return func_intedebt;
	}
}