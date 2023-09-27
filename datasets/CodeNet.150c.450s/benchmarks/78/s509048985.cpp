#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
#define MAX_N 1000000
#define MAX_P 190
typedef unsigned int uint;
int p[MAX_P];
int op[MAX_P];
int pn[MAX_N];
int opn[MAX_N];
#define INF 1000000
int main()
{
//	REP(i,MAX_P) p[i]=i*(i+1)*(i+2)/6;
	int c=0;
	REP(i,MAX_P)
	{

		p[i]=i*(i+1)*(i+2)/6;
		if((p[i]%2) ==1)
		{
			c++;
			op[c]= p[i];
		}
	}
	memset(pn,INF,MAX_N*sizeof(int));
	memset(opn,INF,MAX_N*sizeof(int));
	pn[0]=opn[0]=0;
	for(int i=0;i<MAX_N;i++)
	{
		for(int j=0;j<MAX_P;j++)
		{
			if(i+p[j] > MAX_N) break;
			pn[i+p[j] ]=min(pn[i+p[j]] ,pn[i]+1);
			
		}
	}
	for(int i=0;i<MAX_N;i++)
	{
		for(int j=0;j<MAX_P;j++)
		{
			if(i+op[j] > MAX_N) break;
			opn[i+op[j] ]=min(opn[i+op[j]] ,opn[i]+1);

		}
	}
	int n;
	while(cin >> n &&n)
	{
		cout << pn[n]  <<" " << opn[n] << endl;
	}
	return 0;
}