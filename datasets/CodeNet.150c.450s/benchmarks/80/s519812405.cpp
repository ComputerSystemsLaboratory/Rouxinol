// 2011/08/16 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;
	int b1, b2, b3, b4;
	cin >> b1 >> b2 >> b3 >> b4;

	int S = a1+a2+a3+a4;
	int T = b1+b2+b3+b4;

	if(S>=T)
		cout << S << endl;
	else
		cout << T << endl;

	return 0;
}