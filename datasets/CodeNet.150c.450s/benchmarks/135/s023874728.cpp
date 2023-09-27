#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <ctime>
#include <vector>
#include <stack>

#define rep(i,x) for(int i=0;i<x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)

using namespace std;

int main()
{
	int N,M;

	while(cin>>N>>M && M && N)
	{
		int h[10000]={};
		int w[10000]={};
		unsigned long long sum_h[10000]={};
		unsigned long long sum_w[10000]={};
		long long h_c[510000]={};
		long long w_c[500000]={};

		rep(i,N)
		{
			cin>>h[i];
			sum_h[i+1]=sum_h[i]+h[i];
		}
		rep(i,M)
		{
			cin>>w[i];
			sum_w[i+1]=sum_w[i]+w[i];
		}

		rep(i,N)
			rep(j,N-i)
				h_c[sum_h[j+i+1]-sum_h[j]]++;
		rep(i,M)
			rep(j,M-i)
				w_c[sum_w[j+i+1]-sum_w[j]]++;

		long long  count=0;
		rep(i,min(sum_h[N],sum_w[M])+1)count+=h_c[i]*w_c[i];
		cout<<count<<endl;
	}
	return 0;
}