#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
typedef int64_t Int;
typedef pair<Int,Int> P;

const Int Q = 26;

Int D;
vector<Int> C(Q);
vector<vector<Int>> S(400, vector<Int>(Q));

struct ContestInformation{
    vector<set<Int>> held; // held[q] : コンテストqを行った日程の集合
    vector<Int> schedule; // schedule[d]: d日目に実施するコンテストの番号
    Int score = 0; // 最終日の満足度

    ContestInformation(Int D){
        schedule.resize(D);

        held.resize(Q);
        rep(q, Q){
            held[q].insert(-1);
            held[q].insert(D);
        }
    }

    void ReadSchedule(){
        rep(d,D) {
            Int q; cin >> q; q--;
            schedule[d] = q;
            held[q].insert(d);
        }
    }

    // 最終日の満足度を計算する
    void CalcScore(){
        Int ans = 0;

        rep(d,D){
            Int q_now = schedule[d]; // その日に行われるコンテスト

            rep(q, Q){
                if(q == q_now){
                    ans += S[d][q];
                } else {
                    auto last_day_itr = lower_bound(held[q].begin(),held[q].end(),d);
                    ans -= C[q] * (d - *prev(last_day_itr));
                }
            }
            cout << ans << endl;
        }

        score = ans;
    }
};



int main(){
    cin >> D;
    rep(i,Q) cin >> C[i];
    rep(i,D) rep(j,Q) cin >> S[i][j];

    ContestInformation CI(D);
    CI.ReadSchedule();
    CI.CalcScore();
}