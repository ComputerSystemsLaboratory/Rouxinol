#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
  int d;
  cin >> d;
  vector<int> c(26),tmp(26);
  vector<vector<int>> s;
  for(int i=0;i<26;i++){
    cin >> c[i];
  }
  for(int i=0;i<d;i++){
    for(int j=0;j<26;j++){
      cin >> tmp[j];
    }
    s.push_back(tmp);
  }
  vector<int> t(d);
  for(int i=0;i<d;i++){
    cin >> t[i];
  }
  
  vector<int> v(d+1,0),last(26,0);
  for(int i=1;i<d+1;i++){
    last[t[i-1]-1] = i;
    v[i] = v[i-1] + s[i-1][t[i-1]-1];
    for(int j=0;j<26;j++){
      if(j!=t[i-1]-1){
        v[i] -= c[j] * (i - last[j]);
      }
    }
  }
  
  for(int i=1;i<=d;i++){
    cout << v[i] << endl;
  }
  return 0;
}