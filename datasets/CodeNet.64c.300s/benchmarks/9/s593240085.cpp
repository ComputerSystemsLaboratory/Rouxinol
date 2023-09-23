#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	double money=100;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		money = money*1.05;
		money = ceil(money);
	}
	int a = money * 1000;
	cout << a<<endl;
	return 0;
}