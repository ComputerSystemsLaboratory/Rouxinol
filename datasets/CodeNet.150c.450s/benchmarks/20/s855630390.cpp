#include <iostream>

using namespace std;
int main()
{
	int s,a,b,c,w,d;
	cin>>s;
	a=s/(60*60);
	s=s%(60*60);
	b=s/60;
	c=s%60;
	cout<<a<<":"<<b<<":"<<c<<endl;
	
   return 0;
}