// 2015/05/19 Tazoe

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a%b);
}

int main()
{
	while(true){
		int a, b;
		cin >> a >> b;

		if(cin.eof())
			break;

		int g = gcd(a, b);

		cout << g << ' ' << a/g*b << endl;
	}

	return 0;
}