#include <iostream>
#include <string>
#include <cstring>
#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[14],b[14],c[14],d[14];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	rep(i,n)
	{
		char ch;
		int t;
		cin >> ch >> t;

		if(ch == 'S') a[t]++;
		else if(ch == 'H') b[t]++;
		else if(ch == 'C') c[t]++;
		else if(ch == 'D') d[t]++;
	}

	REP(i,1,14)
	{
		if(a[i] == 0)
		{
			cout << "S " << i << endl;
		}
	}

	REP(i,1,14)
	{
		if(b[i] == 0)
		{
			cout << "H " << i << endl;
		}
	}

	REP(i,1,14)
	{
		if(c[i] == 0)
		{
			cout << "C " << i << endl; 
		}
	}
	
	REP(i,1,14)
	{
		if(d[i] == 0)
		{
			cout << "D " << i << endl;
		}
	}
	return 0;
}