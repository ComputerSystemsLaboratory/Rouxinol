#include<iostream>
using namespace std;
int main(void)
{
	int a,b,c,x=0,f=0;
	cin>>a>>b>>c;
	for(int x=a;x<=b;x++)
	if(c%x==0) f++;
	cout<<f<<endl;
	return 0;
}
