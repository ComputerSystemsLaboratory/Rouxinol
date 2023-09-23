#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int n,s=100000,a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s*=1.05;
		if(s%1000>=1)
		{
			a=1000-s%1000;
			s+=a;
		}
	}
	cout<<s<<endl;
	return 0;
}