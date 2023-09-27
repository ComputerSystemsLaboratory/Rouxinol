#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    int d;
    while(cin >> d){
        int n = 600 / d;
        int sum = 0;
        rep(i, 0, n){
            sum += d * (i * d) * (i * d);
        }
        cout << sum << endl;
    }
}