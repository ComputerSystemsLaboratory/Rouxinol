// 2011/11/21 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){

	int n;
	cin >> n;

	if(n==0)
		break;

	int m = 1000-n;

	int sum = 0;

	sum += m/500;
	m %= 500;

	sum += m/100;
	m %= 100;

	sum += m/50;
	m %= 50;

	sum += m/10;
	m %= 10;

	sum += m/5;
	m %= 5;

	sum += m;

	cout << sum << endl;

	}

	return 0;
}