#include <iostream>
#include <cstring>
using namespace std;

#define NMAX 1000001
int nm[NMAX],nm2[NMAX];

int main()
{
	int N;
	for(int i=0; i<NMAX; i++)
	{
		nm[i] = nm2[i] = (1<<25);
	}
	nm[0]=nm2[0]=0;
	
	for(int n=1; true; n++)
	{
		int V=n*(n+1)*(n+2)/6;
		if(V>=NMAX) break;		
	
		for(int i=V; i<NMAX; i++)
		{
			nm[i]=min(nm[i],nm[i-V]+1);
		}	
	}
	
	for(int n=1; true; n++)
	{
		int V=n*(n+1)*(n+2)/6;
		if(V>=NMAX) break;
		
		if(V%2==0) continue;		
	
		for(int i=V; i<NMAX; i++)
		{
			nm2[i]=min(nm2[i],nm2[i-V]+1);
		}	
	}	
	
	while(cin >> N, N)
	{		
		cout << nm[N] << " " << nm2[N] << endl;
	}
}