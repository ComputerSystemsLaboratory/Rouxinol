#include<iostream>
using namespace std;
int main()
{
	int r, p, n, m, h;
	
	cin >> r;
	
	p = r / 3600;
	n = r % 3600;
	m = n / 60;
	h = n % 60;
	
	cout << p << ":" << m << ":" << h << endl;

}