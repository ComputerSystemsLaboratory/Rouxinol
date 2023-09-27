#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
#define first first
#define second se
using namespace std;
typedef pair<int, int> P;
typedef vector<int> vi;


signed main(){
    int a;
    int d[110] = {0};
    while(cin >> a){
        d[a]++;
    }
    int MAX = 0;
    rep(i, 1, 101){
        MAX = max(MAX, d[i]);
    }
    vector<int> ans;
    rep(i, 1, 101){
        if(d[i] == MAX) ans. push_back(i);
    }
    rep(i, 0 ,ans.size()){
        cout << ans[i] << endl;
    }
}