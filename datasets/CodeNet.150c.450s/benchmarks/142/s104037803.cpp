#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define ff first
#define ss second

void setIO(string name = "") { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    freopen((name+".in").c_str(), "r", stdin); // see Input & Output
    freopen((name+".out").c_str(), "w", stdout);
}
// the code that we provide requires everything above this line to compile

int main() {
	int n, k;cin>>n>>k;
	int arr[n];
	for(int i = 0; i < n; ++i) cin>>arr[i];
	for(int i = k; i < n; ++i){
		if(arr[i] > arr[i-k]){
			cout<<"Yes\n";
			continue;
		}
		cout<<"No\n";
	}
    return 0;
}