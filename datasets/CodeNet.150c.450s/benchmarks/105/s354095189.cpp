#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long long i=0; i<(long long)(n); i++)
#define REP(i, k, n) for(long long i=(long long)(k); i<(long long)(n); i++)
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define PQ(T) priority_queue<T>
#define PQS(T) priority_queue<T, vector<T>, greater<T> >
#define deci cout << fixed << setprecision(15);
typedef long long ll;
const ll inf = 1020304050607080910;
const int INF = 2000000000;
const ll mod = 1000000007;
typedef pair<ll, ll> P;
typedef pair<ll, P> PP;
template<class T> bool chmin(T&x,T y){if(x>y){x=y;return true;}return false;}
template<class T> bool chmax(T&x,T y){if(x<y){x=y;return true;}return false;}
ll gcd(ll x,ll y){if(x>y)swap(x, y);while(x!=0){y%=x;swap(x, y);}return y;}
ll mpow(ll x,ll r){if(r==0)return 1;if(r%2==1){return x*mpow(x,r-1)%mod;}else{ll aa=mpow(x,r/2);return aa*aa%mod;}}

int main(){
	int T; cin >> T;
	rep(i, T){
		int N, f = 0; cin >> N;
		ll A[N];
		rep(i, N) cin >> A[i];
		string S; cin >> S;
		vector<ll> basis;
		for(int j=S.size()-1; j>=0; j--){
			if(S[j] == '0'){
				for(auto b : basis) chmin(A[j], A[j]^b);
				if(A[j]){
					for(auto b : basis) chmin(b, b^A[j]);
					basis.pb(A[j]);
				}
			}else{
				for(auto b : basis) chmin(A[j], A[j]^b);
				if(A[j]) f = 1;
			}
		}
		cout << f << endl;
	}
	return 0;
}
