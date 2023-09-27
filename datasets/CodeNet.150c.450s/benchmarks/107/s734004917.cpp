#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<functional>
#include<queue>
#include <iomanip>
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

#define MAX_D 10000

int dp[MAX_D][MAX_D];

void LS(string a,string b)
{
	REP(i,a.size()+1)dp[i][0] = i;
	REP(i,b.size()+1)dp[0][i] = i;
	
	for(int i = 1;i <= a.size() ;i++)
	{
		for(int j = 1;j <= b.size() ;j++)
		{
			int q = 1;
			if(a[i-1] == b[j-1])q = 0;
			dp[i][j] = min(min(dp[i-1][j-1]+q,dp[i][j-1]+1),dp[i-1][j]+1);
		}
	}	
}


int main()
{
	string a,b;
	cin >> a >> b;
	
	LS(a,b);
	
	cout << dp[a.size()][b.size()] << endl;
	
	
	return 0;
}