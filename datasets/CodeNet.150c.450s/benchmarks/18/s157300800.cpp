#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a;
	cin>>a;
	int ans=100000;
	for(int b=0;b<a;b++)
	{
		double rev=0;
	   ans=ans*1.05;
	   rev=ans%1000;
	   if(rev!=0)
	   ans=ans-rev+1000;
		}
		cout<<ans<<endl;
	}