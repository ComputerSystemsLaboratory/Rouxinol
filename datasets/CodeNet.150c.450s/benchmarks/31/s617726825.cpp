#include <iostream>

using namespace std;
int n;
int a;
int m = 0x7fffffff;
int d = 0x80000000;

int main()
{
	cin >> n;
	cin >> m;
	
	for(int i =1; i<n; i++)
	{
		cin >> a;
		int dd = a - m;
		if (dd > d) d = dd;
		if (a < m) m = a;
	}
	
	cout << d << endl;
	
	return 0;
}