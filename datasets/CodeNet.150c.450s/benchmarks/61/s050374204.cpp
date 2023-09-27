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

int n,a,b,c,x;
int y[111];

int main(){
	cin.sync_with_stdio(false);
	while(1){
		cin>>n>>a>>b>>c>>x;
		if(n==0)break;
		rep(i,n)cin>>y[i];
		int cnt=0,i=0;
		while(cnt<=10000){
			if(x==y[i])i++;
			if(i==n)break;
			x=(a*x+b)%c;
			cnt++;
		}
		if(cnt>10000)cout<<-1<<endl;
		else cout<<cnt<<endl;
	}
	return 0;
}