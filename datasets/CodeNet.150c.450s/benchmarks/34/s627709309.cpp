#include <iostream>
#include <cstdio>
#include <cmath>
#include <stack>

#define rep(i,x) for(int i=0;i<x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)

using namespace std;

int main()
{
	int num[1000]={};
	int add[1000]={};
	int n;
	while(1){
	cin>>n;
	if(n==0)break;
	double sum=1;
	rep(i,n)
	{
		if(i<=3)add[i]=i;
		else add[i]=(add[i-3]+add[i-2]+add[i-1]);
		sum+=add[i];
	}
	cout<<ceil(sum/3650)<<endl;
}

	return 0;
}