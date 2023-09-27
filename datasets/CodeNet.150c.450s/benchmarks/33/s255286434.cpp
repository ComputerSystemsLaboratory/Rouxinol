#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> x,y,s;

int tax(int p ,int x){
  return (int)floor((p * (100+x) / 100));
}

void calc(int n){
  int ans = 0;
  for(int i = 1; i < s[n]; i++){
    for(int j = i; j < s[n]; j++){
      if(tax(i,x[n]) + tax(j,x[n]) == s[n]){
        ans = max(ans, tax(i, y[n]) + tax(j, y[n]));
      }
    }
  }
  cout << ans << endl;
}

int main(){
  int tmp_x,tmp_y,tmp_s;
  while(true){
    cin >> tmp_x >> tmp_y >> tmp_s;
    if(tmp_x == 0 && tmp_y == 0 && tmp_s == 0)
      break;
    x.push_back(tmp_x);
    y.push_back(tmp_y);
    s.push_back(tmp_s);
  }
  for(int i = 0; i < x.size(); i++)
    calc(i);
  return 0;
}