#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	int h, m, s, t;
	cin >> t;
	h = t / 3600;
	t = t % 3600;
	m = t / 60;
	s = t % 60;
	cout << h << ":" << m << ":" << s << endl; 
	return 0;
} 
