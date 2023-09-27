#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

vector<int> C(26);
vector<int> last(26);
vector<vector<int>> S(365, vector<int>(26));

int down(int day){
    day++;
    ll ret = 0;
    rep(i, 26){
        ret += C[i] * (day - last[i]);
    }
    return ret;
}

int check(int day){
    ll ret = 0;
    ll tmp = 0;
    ll tmp2 = 0;
    rep(i, 26){
        tmp2 = last[i];
        last[i] = i+1;
        tmp = S[day][i];
        tmp -= down(i);
        last[i] = tmp2;
        ret = max(ret, tmp);
    }
    return ret;
}

int main(){
    int D;
    cin >> D;
    rep(i, 26) cin >> C[i];
    rep(i, D){
        rep(j, 26){
            cin >> S[i][j];
        }
    }  
    ll ans = 0;

    vector<int> T(D);
    rep(i, D) cin >> T[i];
    rep(i, D) T[i]--;

    rep(i, D){
        last[T[i]] = i+1;
        ans += S[i][T[i]];
        ans -= down(i);
        cout << ans << endl;
    }

    return 0;
}
