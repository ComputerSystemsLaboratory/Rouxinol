#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <complex>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <functional>
#include <iterator>

using namespace std;

#define dump(n) cerr<<"# "<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define peri(i,a,b) for(int i=int(b);i-->int(a);)
#define rep(i,n) repi(i,0,n)
#define per(i,n) peri(i,0,n)
#define iter(c) __typeof__((c).begin())
#define foreach(i,c) for(iter(c) i=(c).begin();i!=(c).end();++i)
#define all(c) (c).begin(),(c).end()
#define mp make_pair

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;
typedef pair<int,int> pii;

int toint(int y,int m,int d)
{
	int res=0;
	repi(i,1,y){
		if(i%3==0)
			res+=200;
		else
			res+=195;
	}
	repi(i,1,m){
		if(y%3==0 || i%2==1)
			res+=20;
		else
			res+=19;
	}
	return res+d;
}

void solve()
{
	int y,m,d; cin>>y>>m>>d;
	cout<<toint(1000,1,1)-toint(y,m,d)<<endl;
}

int main()
{
	int tc; cin>>tc;
	while(tc--)
		solve();
	
	return 0;
}