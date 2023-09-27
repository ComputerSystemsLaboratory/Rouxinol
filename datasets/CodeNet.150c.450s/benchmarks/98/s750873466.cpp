#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
  while(1){
    int n, m;
    cin >> n >> m;
    if(!n) break;

    vector<int> taro(n);
    vector<int> hanako(m);

    for(auto itr = taro.begin(); itr != taro.end(); itr++){
      cin >> *itr;
    }
    for(auto itr = hanako.begin(); itr != hanako.end(); itr++){
      cin >> *itr;
    }

    sort(taro.begin(), taro.end());
    sort(hanako.begin(), hanako.end());

    int diff = accumulate(taro.begin(), taro.end(), 0) - accumulate(hanako.begin(), hanako.end(), 0);

    if(diff % 2){
      cout << -1 << endl;
      continue;
    }

    bool flag = false;
    for(int t_val : taro){
      for(int h_val : hanako){
        if(t_val - h_val == diff/2){
          cout << t_val << " " << h_val << endl;
          flag = true;
          break;
        }
      }
      if(flag) break;
    }

    if(flag){
      continue;
    }
    else{
      cout << -1 << endl;
      continue;
    }
  }

  return 0;
}