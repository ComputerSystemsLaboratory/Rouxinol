#include <bits/stdc++.h>
using namespace std;

template<typename T>
void out(T x) { cout << x << endl; exit(0); }
#define watch(x) cout << (#x) << " is " << (x) << endl





using ll = long long;

const ll mod = 1e9+7;
const int maxn = 1e6 + 5;



int f(int n) {
    int res = 0;
    for (int x=1; x*x <= n; x++) {
	for (int y=1; x*x+y*y+x*y <= n; y++) {
	    for (int z=1; x*x + y*y + z*z + x*y + y*z + z*x <= n; z++) {
		if (x*x + y*y + z*z + x*y + y*z + z*x == n) {
		    res++;
		}
	    }
	}
    }
    return res;
}



int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);

    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
	cout<<f(i)<<"\n";
    }
    
    
    return 0;
}
