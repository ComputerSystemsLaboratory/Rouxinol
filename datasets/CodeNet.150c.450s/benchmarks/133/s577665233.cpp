#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

double TIME_LIMIT = 3;

//状態
struct STATE {
  int Type;
  int D;
  map<int, int> c;
  map<P, int> s;
};

struct SCHEDULE {
  vector<int> t;
  int current_day() {
    return t.size();
  }
  int type(int day) {
    return t[day-1];
  }
  int calc_score(STATE& state, int max_day) {
    int score = 0;
    int m_day = min(max_day, (int)t.size());
    map<int, int> last_day;
    for(int day=1;day<=m_day;day++) {
      int type = t[day-1];
      int ps = state.s[P(day, type)];
      int ng = 0;
      last_day[type] = day;
      for(int t=1;t<=state.Type;t++) {
        ng += state.c[t] * (day - last_day[t]);
      }
      score = score + ps - ng;

    }
    return score;
  }
  void held(int type) {
    t.push_back(type);
  }
};

// 状態の初期化
void init (STATE& state, SCHEDULE& schedule) {
  int Type = 26;

  int D;
  cin >> D;
  state.Type = 26;
  state.D = D;
  rep(i, Type) {
    int c_i;
    cin >> c_i;
    state.c[i + 1] = c_i;
  }
  rep(d, D) {
    rep(t, Type) {
      int s_dt;
      cin >> s_dt;
      state.s[P(d+1, t+1)] = s_dt;
    }
  }
}

int main() {
  STATE state;
  SCHEDULE schedule;
  init(state, schedule);

  // while (true) {
  //   if ((double)clock() / CLOCKS_PER_SEC > TIME_LIMIT) break;

  //   STATE new_state = state;
  //   modify(new_state);
  //   int new_score = calc_score(new_state);
  //   int pre_score = calc_score(state);

  //   if (new_score > pre_score) {
  //     state = new_state;
  //   }
  // }

  rep(i, state.D) {
    int type;
    cin >> type;
    schedule.held(type);
  }
  for(int day=1;day<=state.D;day++){
    cout << schedule.calc_score(state, day) << endl;
  }
  return 0;
}
