#include <iostream>
#include <cstdio>

//#define PI 3.141592653589

using namespace std;



int main()
{
	int S;
	int h, m, s;
	
	cin >> S;
	h = S / 3600;
	S = S % 3600;
	m = S / 60;
	S = S % 60;
	s = S;
	
	cout << h << ":" << m << ":" << s << endl;
	
	return 0;
}