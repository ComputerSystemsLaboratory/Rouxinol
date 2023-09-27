// 2011/09/09 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		n = 1000-n;

		int sum = 0;

		sum += n/500;
		n %= 500;

		sum += n/100;
		n %= 100;

		sum += n/50;
		n %= 50;

		sum += n/10;
		n %= 10;

		sum += n/5;
		n %= 5;

		sum += n;

		cout << sum << endl;
	}

	return 0;
}