#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    int n;
    while(cin >> n, n){
        vector<int> a(n, 0), sum(n + 1, 0);
        rep(i, 0, n){
            cin >> a[i];
        }
        rep(i, 1, n + 1){
            sum[i] += sum[i - 1] + a[i - 1];
        }
        int MAX = -1e10;
        rep(i, 0, n + 1){
            rep(j, i + 1, n + 1){
                MAX = max(MAX, sum[j] - sum[i]);
            }
        }
        cout << MAX << endl;
    }
}