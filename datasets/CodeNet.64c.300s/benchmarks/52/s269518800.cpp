#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
// #define first first
// #define second se
using namespace std;
typedef pair<int, int> P;
typedef vector<int> vi;

int ans = 0;
int n, s;

void dfs(int k, int used, int sum){
    if(used == n && sum == s) ans++;
    if(used == n || k >= 10) return;
    dfs(k + 1, used + 1, sum + k);
    dfs(k + 1, used, sum);
    return;
}

signed main(){
    while(1){
        cin >> n >> s;
        if(n + s == 0) break;
        ans = 0;
        dfs(0, 0, 0);
        o(ans);
    }
}