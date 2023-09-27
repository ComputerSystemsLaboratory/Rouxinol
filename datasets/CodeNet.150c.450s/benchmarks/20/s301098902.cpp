// 2014/07/14 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int S;
	cin >> S;

	cout << S/60/60 << ':' << S/60%60 << ':' << S%60 << '\n';

	return 0;
}