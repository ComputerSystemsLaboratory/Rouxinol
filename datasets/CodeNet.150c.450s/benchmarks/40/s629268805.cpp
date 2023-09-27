#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define maxch(x,y) x=max(x,y)
#define minch(x,y) x=min(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt(x) bitset<32>(x).count()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;
typedef pair<ll, ll> PL;
typedef pair<P, ll> PPL;

#define INF INT_MAX/3

#define MAX_N 1000

struct dice{
	int d[6];
	void rotation(int& w,int& x,int& y,int& z){
		int tmp=w; w=x; x=y; y=z; z=tmp;
	}
	void n(){rotation(d[4],d[0],d[1],d[5]);}
	void e(){rotation(d[2],d[0],d[3],d[5]);}
	void w(){rotation(d[3],d[0],d[2],d[5]);}
	void s(){rotation(d[1],d[0],d[4],d[5]);}
};

dice dic;
string s;

int main(){
	cin.sync_with_stdio(false);
	rep(i,6){
		cin>>dic.d[i];
	}
	cin>>s;
	rep(i,s.length()){
		if(s[i]=='N')dic.n();
		if(s[i]=='E')dic.e();
		if(s[i]=='W')dic.w();
		if(s[i]=='S')dic.s();
	}
	cout<<dic.d[0]<<endl;
	return 0;
}