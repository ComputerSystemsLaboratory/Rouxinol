#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> S;
  map<int,int> temp;

  int a, L, min, max;
  while (1){
    bool FLAG = false;
    cin >> a >> L;
    if (!a && !L) break;
    if (a == 0){
      cout << a << " " << a << " " << a + 1 << endl;
      continue;
    }
    temp.insert(make_pair(a,0));
    for (int i = 0; i < 100; ++i){

      for (int l = 0; l < L; ++l){
        S.push_back(a % 10);
        a = a / 10;
      }
      sort(S.begin(), S.end());
      int digit = 1;
      min = 0;
      max = 0;
      for (int j = 0; j < L; ++j){
        max += S[j] * digit;
        min += S[L - j - 1] * digit;
        digit *= 10;
      }
      //cout << max << " " << min << endl;
      auto itr=temp.find(max-min);
      if (itr!=temp.end()){
        cout << itr->second << " " << max - min << " " << i - itr->second + 1 << endl;
        FLAG = true;
        break;
      }
      if (FLAG)break;
      a = max - min;
      temp.insert(make_pair(a,i+1));
      //cout << "a" << a << endl;
      S.clear();
    }
    S.clear();
    temp.clear();
  }

  return 0;
}