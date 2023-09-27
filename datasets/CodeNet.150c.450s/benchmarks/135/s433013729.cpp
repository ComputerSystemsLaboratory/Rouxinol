#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int N, M, k;
int a[1500], A[1500000], b[1500], B[1500000];
int s;
int main()
{
	while(cin >> N >> M && N*M!=0)
	{
		for(int i=1; i<=1500000; i++)
		{
			A[i]=0;
			B[i]=0;
		}
		a[0]=0;
		b[0]=0;
		s=0;
		for(int i=1; i<=N; i++)
		{
			cin >> k;
			a[i]=a[i-1]+k;
			for(int j=0; j<i; j++)
			{
				A[a[i]-a[j]]+=1;
			}
		}
		for(int i=1; i<=M; i++)
		{
			cin >> k;
			b[i]=b[i-1]+k;
			for(int j=0; j<i; j++)
			{
				B[b[i]-b[j]]+=1;
			}
		}
		for(int i=1; i<=1500000; i++)
		{
			s+=A[i]*B[i];
		}
		cout << s << endl;
	}
	return 0;
}