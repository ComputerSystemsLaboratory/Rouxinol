#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define P pair<ll,ll>
#define FOR(I,A,B) for(ll I = (A); I < (B); ++I)
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin()) //ai>=v  x is sorted
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin()) //ai>v  x is sorted
#define NUM(x,v) (POSU(x,v)-POSL(x,v))  //x is sorted
#define SORT(x) (sort(x.begin(),x.end())) // 0 2 2 3 4 5 8 9
#define REV(x) (reverse(x.begin(),x.end())) //reverse
#define TO(x,t,f) ((x)?(t):(f))
#define CLR(mat) memset(mat, 0, sizeof(mat))
#define FILV(x,a) fill(x.begin(),x.end(),a)
#define FILA(ar,N,a) fill(ar,ar+N,a)
#define NEXTP(x) next_permutation(x.begin(),x.end())
ll gcd(ll a,ll b){if(a<b)swap(a,b);if(a%b==0)return b;else return gcd(b,a%b);}
ll lcm(ll a,ll b){ll c=gcd(a,b);return ((a/c)*(b/c)*c);}//saisyo kobaisu
#define pb push_back
#define pri(aa) cout<<(aa)<<endl
#define mp(x,y) make_pair(x,y)
#define fi first
#define se second
const ll INF=1e9+7;
const ll N = 1007;





int main(){
	while(1){
		ll m,nmin,nmax,ans;
		vector<ll> p;
		cin>>m>>nmin>>nmax;
		if(m==0&&nmin==0&&nmax==0)break;
		p.resize(m);
		FOR(i,0,m){
			cin>>p[i];
		}
		SORT(p);
		ll g=p[m-nmin] - p[m-nmin-1];
		ans = nmin;
		FOR(i,nmin,nmax+1){
			if(g<=p[m-i] - p[m-i-1]){
				ans = i;
				g = p[m-i] - p[m-i-1];
			}
		}
		cout<<ans<<endl;
	}
}
