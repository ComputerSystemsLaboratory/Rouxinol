#include <bits/stdc++.h>
 
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> P;
 
constexpr int INF = 1e9;
constexpr int MOD = 1e9+7;

ll sum[500010];

int main() {
    int n;
    cin >> n;
    string str[4] = {"AC","WA","TLE","RE"};
    int ans[4] = {};
    string s;
    rep(i,n){
        string s;
        cin >> s;
        if(s[0] == 'A') ans[0]++;
        else if(s[0] == 'W') ans[1]++;
        else if(s[0] == 'T') ans[2]++;
        else ans[3]++;
    }
    rep(i,4){
        cout << str[i] << " x " << ans[i] << endl;
    }
    return 0;
}