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

int n,m;
vector<string> t;
bool flag=true;

int main(){
	cin.sync_with_stdio(false);
	cin>>n;
	rep(i,n){
		string s;
		cin>>s; t.pb(s);
	}
	cin>>m;
	rep(i,m){
		string s;
		cin>>s;
		if(exist(t,s)){
			if(flag){
				cout<<"Opened by "<<s<<endl;
				flag=false;
			}else{
				cout<<"Closed by "<<s<<endl;
				flag=true;
			}
		}else{
			cout<<"Unknown "<<s<<endl;
		}
	}
	return 0;
}