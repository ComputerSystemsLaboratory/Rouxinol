#define _USE_MATH_DEFINES
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
#include <cmath>
#include <numeric>
#include <iomanip>

using namespace std;
int cumsum[60 * 60 * 24];
int to_sec(string S){
  return stoi(S.substr(0, 2)) * 60 * 60 + stoi(S.substr(3, 2)) * 60 + stoi(S.substr(6,2));
}

int main(void){
  while(true){
    int n;
    cin >> n;
    if(n == 0){
      break;
    }

    for(int i = 0; i < 60 * 60 * 24; i++){
      cumsum[i] = 0;
    }

    for(int i = 0; i < n; i++){
      string s1;
      string s2;
      cin >> s1 >> s2;
      cumsum[to_sec(s1)] ++;
      cumsum[to_sec(s2)] --;
    }

    for(int i = 1; i < 60 * 60 * 24; i++){
      cumsum[i] += cumsum[i - 1];
    }

    int ans = 0;
    for(int i = 0; i < 60 * 60 * 24; i++){
      ans = max(ans, cumsum[i]);
    }
    cout << ans << endl;
  }
  return 0;
}

