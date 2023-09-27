#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  vector<pair<int,int>> V;
  for(int i = 1; i <= 150; ++i){
    for(int j = i+1; j <= 150; ++j){
      V.emplace_back(i*i+j*j,i);
    }
  }
  sort(V.begin(), V.end());
  int h, w;
  while(cin >> h >> w, h){
    pair<int,int> t(h*h+w*w,h);
    pair<int,int> p = *upper_bound(V.begin(), V.end(), t);
    int h_ = p.second, w_ = sqrt(p.first-h_*h_);
    cout << h_ << " " << w_ << endl;
  }
}

