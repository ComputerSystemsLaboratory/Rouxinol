#include<bits/stdc++.h>
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i+=1)
#define reps(i,a,b) for(int i=a;i>=b;i-=1)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define pi pair<int, int>
#define mp make_pair
#define ff first
#define ss second
#define in1(x) int x; cin>>x;
#define in2(x, y) int x, y; cin>>x>>y;
#define in3(x, y, z) int x, y, z; cin>>x>>y>>z;
#define in4(x, y, z, w) int x, y, z, w; cin>>x>>y>>z>>w;
#define mi unordered_map<int,int>
#define mem(x) memset(x, 0, sizeof(x))
#define IOS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
using namespace std;
bool primes[1000001];vi prime; void seive(); int gcd(int a, int b); int power(int x, int y);

int32_t main(void){
	IOS;
	in2(n, k);
	int arr[n];
	rep(i, 0, n) cin>>arr[i];
	rep(i, k, n)
	{
		if(arr[i-k] < arr[i]) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

void seive(){memset(primes, true, sizeof(primes));primes[0] = primes[1] = false;for(int i = 2; i*i<=1000000;i += 1){
if(primes[i]){for(int j = i*i; j <= 1000000;j += i) primes[j] = false;}}rep(i, 2, 1000001){if(primes[i]) prime.pb(i);}}
int gcd(int a, int b){return b==0 ? a : gcd(b, a%b);}
int power(int x, int y){ int res = 1;x = x % mod; if (x == 0) return 0;
while (y > 0){ if(y & 1) res = (res*x) % mod; y = y>>1; x = (x*x) % mod;} return res;}
