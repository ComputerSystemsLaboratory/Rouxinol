#include<iostream>
using namespace std;
int main()
{
	int a,b,c,t=0;
	cin>>a>>b>>c;
	for(a;a<=b;a++)
	{
		if(c%a==0)
		++t;
	}
	cout<<t<<endl;
	return  0;
 } 
