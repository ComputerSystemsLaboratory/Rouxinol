#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
#define REP(i, n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define ALL(a)  (a).begin(),(a).end()
#define endl "\n"

template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
typedef long long ll;


// Inputs
int D;
vector<int> c;
vector<vector<int>> s;

class Answer {
public:
    // 0~25の構造体
    vector<int> ans;
    explicit Answer() {
        ans.resize(D,0);
    }

    void print_ans() {
        for(const auto &it: ans) cout << it+1 << endl;
    }
};


// スコア計算を行う
ll calc(const Answer& ans) {
    // あるコンテストi-1が開催されていない日数
    vector<int> not_open_term(26,0);
    ll manzoku = 0;
    REP(day,D) {
        manzoku += s[day][ans.ans[day]];
        REP(typ,26) not_open_term[typ]++;
        REP(typ,26) if(typ != ans.ans[day])manzoku -= not_open_term[typ] * c[typ];
        not_open_term[ans.ans[day]] = 0;
        // For B その日終了時に満足度を出力する。
        cout << manzoku << endl;
    }
    return manzoku;
}


void read() {
    cin >> D;
    c.resize(26);
    REP(i,26) cin >> c[i];
    s.resize(D);
    REP(i,D) {
        s[i].resize(26);
        REP(j,26) cin >> s[i][j];
    }
}

// 下がりやすさを無視して一番点が高い物を選ぶ
Answer greedy1() {
    Answer answer = Answer();
    REP(day,D) {
        int mx = 0;
        REP(typ,26) if(chmax(mx,s[day][typ])) answer.ans[day] = typ;
    }
    return answer;
}

// 下がりやすさを考慮して一番高い物を選ぶ
Answer greedy2() {
    Answer answer = Answer();
    // あるコンテストi-1が開催されていない日数
    vector<int> not_open_term(26,0);

    REP(day,D) {
        // 期待値の最大値
        int mx = 0;
        REP(typ,26) {
            // そのコンテストを開催した際の満足度変動値を計算する。
            int manzoku = s[day][typ];
            REP(_typ,26) if(_typ != typ )manzoku-=(not_open_term[_typ] * c[_typ]);
            if(chmax(mx,manzoku)) answer.ans[day] = typ;
        }
        REP(i,26) not_open_term[i]++;
        // 開催するコンテストが決定されたらそれの日数を0にする。
        not_open_term[answer.ans[day]] = 0;
    }
    return answer;

}

void solveB() {
    read();
    Answer answer = Answer();
    REP(i,D) {
        cin >> answer.ans[i];
        answer.ans[i]--;
    }
    cerr << calc(answer) << endl;
}

void solve() {
    read();
    // auto ans = Answer();
    // ans.print_ans();
    auto ans = greedy2();
    ans.print_ans();
}

int main() {
    solveB();
    return 0;
}