#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  while(true) {
    int N; cin >> N;
    if(N == 0) break;
    int ans = 0;
    bool up = false;
    bool leftup = false;
    bool rightup = false;
    for(int i = 0; i < N; ++i) {
      string s; cin >> s;
      if(s == "lu") leftup = true;
      if(s == "ru") rightup = true;
      if(s == "ld") leftup = false;
      if(s == "rd") rightup = false;
      if(up == false && leftup && rightup) {
        up = true;
        ans++;
      }
      else if(up && leftup == false && rightup == false) {
        up = false;
        ans++;
      }
    }
    cout << ans << endl;
  }
}