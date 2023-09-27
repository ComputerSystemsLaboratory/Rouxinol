#include<iostream>

using namespace std;

int main()
{
	unsigned int S = 0;
	int h = 0, m = 0, s = 0;
	
	cin >> S;
	
	m = S / 60;
	s = S % 60;
	h = m / 60;
	m = m % 60;
	
	cout << h << ":" << m << ":" << s << endl;	
	
	return 0;
}