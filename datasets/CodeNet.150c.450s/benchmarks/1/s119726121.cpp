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
const ll N = 300003;

int LIS(vector<int> a){
	vector<int> dp;
	const int infi=1e9+7;
	int n = a.size();
	dp.resize(n);
	fill(dp.begin(),dp.end(),infi);
	for(int i=0;i<n;i++){
		*lower_bound(dp.begin(),dp.end(),a[i])=a[i];
	}
	int ans = lower_bound(dp.begin(),dp.end(),infi)-dp.begin();
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> a;
	int n;cin>>n;a.resize(n);
	FOR(i,0,n)cin>>a[i];
	cout<<LIS(a)<<endl;
	return 0;
}

