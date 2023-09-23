#include <iostream>
using namespace std;
#define DEBT 100000
#define INTEREST 5 //%
int main()
{
	int n;
	int sumdebt=DEBT;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		sumdebt = sumdebt + (int)sumdebt*((float)INTEREST/100);
		if(sumdebt % 1000 != 0)
		{
			sumdebt = sumdebt + (1000-(sumdebt%1000));
		}
	}

	cout << sumdebt << endl;
	return(0);
}