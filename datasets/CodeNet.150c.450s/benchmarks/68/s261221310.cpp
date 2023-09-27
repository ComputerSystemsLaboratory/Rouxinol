#include <bits/stdc++.h>
using namespace std;

#define int long long
#define DEBUG(x) cerr <<#x<<":"<<x<<endl;
#define DEBUG2(x, y) cerr <<#x<<":"<<x<<" "<<#y<<":"<<y<<endl;
#define DEBUG3(x, y, z) cerr <<#x<<":"<<x<<" "<<#y<<":"<<y<<" "<<#z<<":"<<z<<endl;
#define DEBUGVC(x) cerr <<#x<<": "; for(auto a:x) cerr << a <<" "; cerr << endl;
#define DEBUGMP(x) cerr <<#x<<":"<<endl; for(auto a:x) cerr << a.first <<" "<< a.second << endl;
#define MAX_N (1000006)
#define INF (1LL << 60)
const int MOD = (int)1e9+7;


signed main() {
    while(1) {
        int n;
        cin >> n;
        if(n==0) return 0;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int ans = INF;
        for(int i=0; i<n-1; i++){
            int d = abs(a[i]-a[i+1]);
            ans = min(ans, d);
        }
        cout << ans << endl;
    }
}
