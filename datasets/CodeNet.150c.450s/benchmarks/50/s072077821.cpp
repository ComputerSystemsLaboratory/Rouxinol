#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,m,s;
	while(cin>>n)
	{
		if(n==0)break;
		s=0;
		m=1000-n;
		s=s+(m/500);
		m=m%500;
		s=s+(m/100);
		m=m%100;
		s=s+(m/50);
		m=m%50;
		s=s+(m/10);
		m=m%10;
		s=s+(m/5);
		m=m%5;
		s=s+(m/1);
		cout<<s<<endl;
	}
	return 0;
}