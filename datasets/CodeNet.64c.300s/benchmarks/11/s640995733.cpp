#include <iostream>

using namespace std;

int main()
{
	int S,h,m,s,t1,t2;
	cin >> S;
	h = S/3600;
	t1 = S%3600;
	m = t1/60;
	s = t1 % 60;
	cout<<h<<":"<<m<<":"<<s<<endl;
	return 0;
 } 
