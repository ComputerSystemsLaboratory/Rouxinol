#include <bits/stdc++.h>
 
using namespace std;
 
//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
 
//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}
 
//typedef
//------------------------------------------
typedef pair<int, int> PII;
typedef pair<long, long> PLL;
typedef long long LL;
//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define SORT(c) sort((c).begin(),(c).end())
 
//repetition
//------------------------------------------
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
 
//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const double INF=1e9;
//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))
 
 const int MAX_N=10010;
int par[MAX_N];
int rnk[MAX_N];
void init(int n){
	REP(i,n){
		par[i]=i;
		rnk[i]=0;
	}
}
int find(int x){
	if(par[x]==x){
		return x;
	}else{
		return par[x]=find(par[x]);
	}
}

void unite(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y)return;
	if(rnk[x]<rnk[y]){
		par[x]=y;
	}else{
		par[y]=x;
		if(rnk[x]==rnk[y])rnk[x]++;
	}
}

bool same(int x,int y){
	return find(x)==find(y);
}
int main(){
	int N,Q;
	cin>>N>>Q;
	init(N);
	REP(i,Q){
		int c,x,y;
		cin>>c>>x>>y;
		if(c==0)unite(x,y);
		else cout<<same(x,y)<<endl;
	}
	return 0;
}