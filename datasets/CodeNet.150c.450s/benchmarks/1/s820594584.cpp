#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define pb push_back
const int maxn = 10000;
const int INF32 = 1'050'000'000;
const long long INF64 = 4'000'000'000'000'000'000;
const int MOD7 = 1'000'000'007;
const int MOD9 = 1'000'000'009;

void ERROR(int num) { printf("ERROR%d!\n",num); }
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
int dx[8]={-1,0,1,0,1,1,-1,-1};
int dy[8]={0,-1,0,1,1,-1,1,-1};

int n;
vector<int> a;

int LIS(){
	int N = a.size();
	vector<int> dp(N,INF32);
	rep(i,N){
		auto it = lower_bound(dp.begin(),dp.end(),a[i]);
		*it = a[i];
	}
	return lower_bound(dp.begin(),dp.end(),INF32) - dp.begin();
}

int main(){
	cin >> n;
	a.resize(n);
	rep(i,n){
		cin >> a[i];
	}

	int ans = LIS();
	cout << ans << endl;
}
