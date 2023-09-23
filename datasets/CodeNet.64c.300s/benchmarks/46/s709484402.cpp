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

int a,d,n;

bool is_prime[10000010];

int main(){
	cin.sync_with_stdio(false);
	rep(i,10000001)is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	repl(i,2,10000001){
		if(is_prime[i]){
			for(int j=i*2;j<=10000000;j+=i)is_prime[j]=false;
		}
	}
	while(1){
		cin>>a>>d>>n;
		if(a==0)break;
		int cnt=0;
		while(cnt<n){
			if(is_prime[a])cnt++;
			a+=d;
		}
		cout<<a-d<<endl;
	}
	return 0;
}