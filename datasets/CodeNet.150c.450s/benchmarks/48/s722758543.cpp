#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>
#include<stack>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef vector<string> vstring;
typedef vector<pint> vpint;

struct Edge{int to,from,cost;};

#ifdef DEBUG
#define debug cout
#else
stringstream __ss__;
#define debug __ss__
#endif

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) debug << *i << " "; debug << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

#define rep(i,n) for(int i=0;i<(n);++i)
#define repd(i,n) for(int i=(n)-1;i>=0;i--)
#define repn(i,m,n) for(int i=(m);i<=(n);++i)
#define repnd(i,m,n) for(int i=(n)-1;i>=(m);i--)
#define rep0(i,n) for(i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define sz(n) ((int)(n).size())
#define IL for(;;)
#define MP make_pair
#define PB push_back
#define SS stringstream
#define X second
#define Y first
#define PUTLINE debug<<"LINE:"<<__LINE__<<endl;

const int INF = 2147483647/3;
const double EPS = 1e-10;
const double PI = acos(-1.0);

const int dx[]={1,-1,0,0,1,-1,1,-1,0};
const int dy[]={0,0,1,-1,1,-1,-1,1,0};



int main() {
	int x,y,z,e;
	IL{
		cin>>e;
		if(e==0)break;
		int res=INF;
		for(z=0;z*z*z<=e;++z){
			for(y=0;y*y+z*z*z<=e;++y){
				x=e-z*z*z-y*y;
				chmin(res,x+y+z);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}