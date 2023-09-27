#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int d[5];

	for(int i = 0; i < 5; i++)
		cin >> d[i];
	sort(d,d+5);
	cout << d[4];
	for(int i = 3; i >= 0; i--)
		cout << ' ' << d[i];
	cout << endl;


	return 0;
}