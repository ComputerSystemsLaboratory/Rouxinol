#include<iostream>
using namespace std;
int main()
{
	int n;
	int h, m;
	cin >> n;
	h = n / 3600;
	n = n % 3600;
	m = n / 60;
	n = n % 60;
	cout << h<<":"<<m<<":"<<n << endl;
	return 0;
}