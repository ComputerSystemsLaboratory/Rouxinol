#include <iostream>
 
using namespace std;

void Watch(int S)
{
	int h,m,s;

	h = S/3600;
	m = S%3600/60;
	s = S%60;

	cout<<h<<':'<<m<<':'<<s<<endl;
}

int main()
{
	int x;

	cin >>x;

	Watch(x);

	//while(1);

	return 0;
}