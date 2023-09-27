#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<functional>
#include<queue>
#include<map>
#include<limits>
#include<cmath>
#include<algorithm>
#include<bitset>
#include<utility>
#include<complex>
#include<cstdlib>
#include<set>
#include<cctype>

#define DBG cerr << '!' << endl;
#define REP(i,n) for(int (i) = (0);(i) < (n);++i)
#define rep(i,s,g) for(int (i) = (s);(i) < (g);++i)
#define rrep(i,s,g) for(int (i) = (s);i >= (g);--(i))
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {for(int i = 0;i < (n);i++)cerr << v[i] << ' ';cerr << endl << endl;}
#define SHOW2d(v,i,j) {for(int aaa = 0;aaa < i;aaa++){for(int bbb = 0;bbb < j;bbb++)cerr << v[aaa][bbb] << ' ';cerr << endl;}cerr << endl;}
#define ALL(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef vector<int> iv;
typedef vector<iv> iiv;
typedef vector<string> sv;

bool cant[20][20];
ll mp[20][20];
int a,b,ans;

int main()
{
	while(cin >> a >> b,a)
	{
		REP(i,20)REP(j,20)
		{
			mp[i][j] = 0;
			cant[i][j] = false;
		}
		ans = 0;
		
		int n;
		cin >> n;
		
		REP(i,n)
		{
			int x,y;
			cin >> x >> y;
			cant[x-1][y-1] = true;
		}
		
		REP(i,20)
		{
			if(cant[i][0])break;
			mp[i][0]=1;		
		}
		REP(i,20)
		{
			if(cant[0][i])break;
			mp[0][i]=1;		
		}
		
		
		for(int i = 1;i < a ;i++)for(int j = 1;j < b;j++)
		{
			int tmp = 0;
			if(i > 0)tmp += mp[i-1][j];
			if(j > 0)tmp += mp[i][j-1];
			if(!cant[i][j])
			{
				mp[i][j] = tmp;
			}
			else
			{
				mp[i][j] = 0;
			}
			
		}

		cout << mp[a-1][b-1] << endl;
	}
	
	return 0;
}	