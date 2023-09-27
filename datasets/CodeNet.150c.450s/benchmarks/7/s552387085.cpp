#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i != 10; ++i)
		cin >> a[i];
	sort(begin(a), end(a));
	for (int i = 9; i >= 7; --i)
		cout << a[i] << endl;
	return 0;
}