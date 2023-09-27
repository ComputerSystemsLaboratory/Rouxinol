#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<functional>
#include<queue>
#include<algorithm>
#include<complex>
#include<cstdlib>
#include<cctype>

#define REP(i,n) for(int i = 0;i < (n);i++)
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {for(int i = 0;i < (n);i++)cout << v[i] << ' ';cout << endl << endl;}
#define SHOW2d(v,i,j) {for(int a = 0;a < i;a++){for(int b = 0;b < j;b++)cout << v[a][b] << ' ';cout << endl;}cout << endl;}
#define ALL(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef vector<int> iv;
typedef vector<iv> iiv;
typedef vector<string> sv;

int main()
{
	int n,m;
	while(cin >> n >> m,n|m)
	{
		ll ret = 0;
		vector<pair<int,int> > pv;
		REP(i,n)
		{
			int a,b;
			cin>>a>>b;
			pair<int,int> tmp = MP(b,a);
			pv.PB(tmp);
			ret += a*b;
		}
		
		sort(ALL(pv),greater<pair<int,int> >());
		
		for(int i = 0;m > 0 && i < n;i++)
		{
			if(m >= pv[i].SE)
			{
				ret -=pv[i].FI*pv[i].SE;
				m -= pv[i].SE;
			}
			else
			{
				ret -=m*pv[i].FI;
				m = 0;
			}
		}
		
		cout <<ret << endl;
		
	}
		
	return 0;
}