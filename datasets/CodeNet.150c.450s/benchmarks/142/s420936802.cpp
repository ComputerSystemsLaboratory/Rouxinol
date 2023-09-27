#include <bits/stdc++.h>
using namespace std;

template<typename T>
void out(T x) { cout << x << endl; exit(0); }
#define watch(x) cout << (#x) << " is " << (x) << endl





using ll = long long;

const ll mod = 1e9+7;
const int maxn = 1e6 + 5;





int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);

    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
	cin>>a[i];
    }


    for (int i=k; i<n; i++) {
	if (a[i]>a[i-k]) {
	    cout<<"Yes\n";
	} else {
	    cout<<"No\n";
	}
    }
    
    
    return 0;
}
