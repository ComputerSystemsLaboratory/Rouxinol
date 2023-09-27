#include <bits/stdc++.h>
using namespace std;
#define rep(i,n)for(int i=0;i<(n);i++)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define pb push_back
using ll = long long;
using P = pair<int, int>;

int main(){
    int D; cin >> D;
    vector<int> c(26+1, 0);
    for(int i = 1; i <= 26; i++) cin >> c[i];
    vector<vector<int>> s(D+1, vector<int>(26+1, 0));
    for(int i = 1; i <= D; i++)for(int j = 1; j <= 26; j++) cin >> s[i][j];
    vector<int> t(D+1);
    for(int i = 1; i <= D; i++) {
        cin >> t[i];
    }
    vector<int> last(26+1, 0);
    int ans = 0;
    auto f = [&](int d){
        int res = 0;
        for(int i = 1; i <= 26; i++){
            res += c[i] * (d - last[i]);
        }
        return res;
    };
    for(int day = 1; day <= D; day++){
        int con = t[day];
        ans += s[day][con];
        last[con] = day;
        ans -= f(day); 
        cout << ans << endl;
    }
}