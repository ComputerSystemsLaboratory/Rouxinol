#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int X,Y,S;
int solve()
{
	int maxinum = 0;
	int i,j;
	for (i = 1; i<S; i++)
	{
		for (j = i; j<S; j++)
		{
			if(i*(100+X)/100+j*(100+X)/100 == S)
			{
				int S0= i*(100+Y)/100+j*(100+Y)/100;
				maxinum = max(maxinum,S0);
			}
		}
	}
	return maxinum;
};
int main()
{
	int A[100000];
	int k = 0;
    while(cin>>X>>Y>>S && X>0)
	{
		A[k]=solve();
		k++;
	}
	for(int l = 0;l < k; l++)
	{
		cout<<A[l]<<endl;
	}
	return 0;
}