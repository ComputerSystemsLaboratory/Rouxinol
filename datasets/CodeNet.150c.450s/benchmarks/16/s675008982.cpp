#include<iostream>
#include<string>
#include<stack>
#include<deque>
using namespace std;
struct Reservoir {
  public:
    int amount;
    int right_edge;
    Reservoir(int amount, int right_edge): amount(amount), right_edge(right_edge){}
};
int main() {
  string s; cin >> s;
  int total_amount = 0;
  stack<int> left_slope_xpositions;
  deque<Reservoir> reservoirs;
  for(int i = 0; i < s.size(); ++i) {
    if(s[i] == '\\') {
      left_slope_xpositions.push(i);
    } else if(s[i] == '/') {
      if(left_slope_xpositions.empty()) continue;
      int left = left_slope_xpositions.top(); left_slope_xpositions.pop();
      int amount = i - left;
      total_amount += amount;

      // 自分より左にある貯水湖を結合する
      while(!reservoirs.empty() && reservoirs.back().right_edge > left) {
        amount += reservoirs.back().amount; reservoirs.pop_back();
      }

      // 最も右にある貯水湖としてstackに保存
      reservoirs.push_back(Reservoir(amount, i));
    }
  }

  cout << total_amount << endl;
  if(reservoirs.size()) {
    cout << reservoirs.size() << " ";
  } else {
    cout << reservoirs.size() << endl;
    return 0;
  }
  // stackとして扱ってきた貯水湖を逆順で出力
  while(!reservoirs.empty()) {
    cout << reservoirs.front().amount; reservoirs.pop_front();
    if(reservoirs.empty()) cout << endl;
    else cout << " ";
  }
  return 0;
}
