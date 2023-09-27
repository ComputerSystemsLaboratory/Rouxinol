#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>

#define rep(i,x) for(int i=0;i<x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)

using namespace std;

int main()
{
	int N,M,P;
	while(cin >> N >> M >> P && N)
	{
		int x[100000]={};
		double sum=0;

		rep(i,N)
		{
			cin >> x[i];
			sum+=x[i]*100;
		}

		if(x[M-1]!=0)cout<<floor(sum/x[M-1]*(100-P)/100)<<endl;
		else cout<<0<<endl;
	}
}