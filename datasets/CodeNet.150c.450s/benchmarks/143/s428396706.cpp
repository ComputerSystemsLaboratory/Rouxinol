#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define pb push_back
#define endl '\n'
#define snd second
#define fst first
#define fastio cin.tie(NULL),cout.sync_with_stdio(true)

typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <int> vi;
typedef pair <ll, int> ii;
typedef pair <ii,int> iii;

const int mod = 1e9 + 7;
const int N = 100005;

int freq[N], v[N];

void solve(){
	int n, q;
	ll sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> v[i];
		freq[v[i]]++;
		sum += v[i];
	}
	cin >> q;
	while(q--){
		ll x,y;
		cin >> x >> y;
		sum -= ((ll)freq[x]*x);
		sum += ((ll)freq[x]*y);
		freq[y] += freq[x], freq[x] = 0LL;
		cout << sum << endl;
	}
}

int main(){
	fastio;
	int t = 1;
	//cin >> t;
	while(t--)
		solve();
	return 0;
}
