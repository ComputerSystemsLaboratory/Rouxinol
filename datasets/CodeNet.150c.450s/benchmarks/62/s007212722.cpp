// 2014/07/14 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if(a>b){
		int tmp = a;
		a = b;
		b = tmp;
	}

	if(b>c){
		int tmp = b;
		b = c;
		c = tmp;
	}

	if(a>b){
		int tmp = a;
		a = b;
		b = tmp;
	}

	cout << a << ' ' << b << ' ' << c << '\n';

	return 0;
}