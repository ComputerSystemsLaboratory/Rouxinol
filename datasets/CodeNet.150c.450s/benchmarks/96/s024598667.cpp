#include <iostream>
#include <string>
#include <utility>
#include <stack>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <climits>
#include <set>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;
string keys[10] = {
  "",
  ".,!? ",
  "abc",
  "def",
  "ghi",
  "jkl",
  "mno",
  "pqrs",
  "tuv",
  "wxyz"
};
int main(){
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    string key_string;
    cin >> key_string;
    string ans;
    bool in_loop = false;
    int loop_ind = 0;
    int cur_key;
    for(int j = 0; j < key_string.size(); j++){
      if(key_string[j] == '0'){
        if(in_loop){
          ans += keys[cur_key][loop_ind];
          in_loop = false;
        }
      } else {
        if(in_loop){
          loop_ind = (loop_ind + 1) % keys[cur_key].size();
        } else {
          in_loop = true;
          loop_ind = 0;
          cur_key = key_string[j] - '0';
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}

