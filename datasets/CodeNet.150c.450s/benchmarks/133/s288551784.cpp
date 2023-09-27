#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
typedef int64_t Int;
typedef pair<Int,Int> P;

Int D;
vector<Int> C(26);
vector<vector<Int>> S(365, vector<Int>(26));


// 各日における満足度の配列を返す関数
vector<Int> score(vector<int> schedule){
    vector<int> last_day(26, 0); // 各コンテストを最後に行った日

    vector<Int> res(D, 0);

    rep(d,D){
        int type = schedule[d]-1; // その日に行われるコンテスト

        res[d] += S[d][type];
        rep(i,26){
            if(i == type) continue;
            res[d] -= C[i] * (d+1 - last_day[i]);
        }
        last_day[type] = d+1;

        if(d != D-1) res[d+1] += res[d];
    }

    return res;
}

int main(){
    cin >> D;
    rep(i,26) cin >> C[i];
    rep(i,D) rep(j,26) cin >> S[i][j];

    vector<int> t(D);
    rep(i,D){
        cin >> t[i];
    }

    vector<Int> sc = score(t);
    rep(i,D) cout << sc[i] << endl;
}