#include <iostream>
#include <vector>
#include <algorithm>
#define For(i, n) for(int i = 0; i < (n); i ++)
using namespace std;
using ll = long long;

int main(void){
    while(true){
        int n;
        cin >> n;
        if(n == 0) return 0;
        
        vector<ll> a(n);
        For(i, n) cin >> a[i];
        sort(a.begin(), a.end());
        
        ll ans = 1e18;
        For(i, n-1) ans = min(ans, a[i+1] - a[i]);
        cout << ans << "\n";
    }
}
