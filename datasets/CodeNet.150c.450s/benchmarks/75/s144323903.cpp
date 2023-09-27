#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define P pair<ll,ll>
#define FOR(I,A,B) for(ll I = ll(A); I < ll(B); ++I)
#define FORR(I,A,B) for(ll I = ll((B)-1); I >= ll(A); --I)
#define TO(x,t,f) ((x)?(t):(f))
#define SORT(x) (sort(x.begin(),x.end())) // 0 2 2 3 4 5 8 9
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin()) //xi>=v  x is sorted
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin()) //xi>v  x is sorted
#define NUM(x,v) (POSU(x,v)-POSL(x,v))  //x is sorted
#define REV(x) (reverse(x.begin(),x.end())) //reverse
ll gcd(ll a,ll b){if(a%b==0)return b;return gcd(b,a%b);}
ll lcm(ll a,ll b){ll c=gcd(a,b);return ((a/c)*(b/c)*c);}
#define NEXTP(x) next_permutation(x.begin(),x.end())
const ll INF=ll(1e18)+ll(7);
const ll MOD=1000000007LL;
#define out(a) cout<<fixed<<setprecision((a))


int A[500005],n;
void maxHeapify(int i){
	int l = 2*i;
	int r = 2*i+1;
	int largest;
	if(l<=n && A[l]>A[i]){
		largest = l;
	}else{
		largest = i;
	}
	if(r<=n && A[r]>A[largest]){
		largest = r;
	}
	if(largest != i){
		swap(A[i],A[largest]);
		maxHeapify(largest);
	}
}


int main(){
	cin >> n;
	FOR(i,1,n+1)cin>>A[i];
	for(int i=n/2;i>=1;i--){
		maxHeapify(i);
	}
	FOR(i,1,n+1){
		cout << " " << A[i];
	}
	cout << '\n';
}

