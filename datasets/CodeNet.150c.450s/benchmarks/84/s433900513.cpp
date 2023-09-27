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

struct Inversions{// hantensu
	vector<ll> L,R;
	void initsize(ll n){//input size of A
		L.resize(n/2+2);
		R.resize(n/2+2);	
	}
	ll merge(vector<ll> &A,ll n,ll left,ll mid,ll right){
		ll i,j,k;
		ll cnt = 0;
		ll n1 = mid - left;
		ll n2 = right - mid;
		for(i=0;i<n1;i++)L[i]=A[left+i];
		for(i=0;i<n2;i++)R[i]=A[mid+i];
		L[n1]=R[n2]=INT_MAX;//
		i=j=0;
		for(k=left;k<right;k++){
			if(L[i]<=R[j]){
				A[k]=L[i++];
			}else{
				A[k]=R[j++];
				cnt += n1-i;
			}
		}
		return cnt;
	}
	ll mergeSort(vector<ll> &A,ll n,ll left,ll right){
		ll mid;
		ll v1,v2,v3;
		if(left+1<right){
			mid = (left+right)/2;
			v1 = mergeSort(A,n,left,mid);
			v2 = mergeSort(A,n,mid,right);
			v3 = merge(A,n,left,mid,right);
			return v1+v2+v3;
		}else return 0;
	}
	ll num_inverstion(vector<ll> &A){
		return mergeSort(A,A.size(),0,A.size());
	}
};



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;cin>>n;
	Inversions in;
	in.initsize(n);
	vector<ll> a;
	a.resize(n);
	FOR(i,0,n){
		cin>>a[i];
	}
	cout<<in.num_inverstion(a)<<endl;
	return 0;
}

