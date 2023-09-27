#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int h, w;
typedef pair<int, int> P;

int main(void){
  while(cin >> h >> w && h && w){
    pair<P, int> p(P(w * w + h * h, h), w);
    vector<pair<P, int> > v;

    for(int h_ = 1; h_ <= 150; h_++){
      for(int w_ = 1; w_ <= 150; w_++){
        if(h_ < w_) v.push_back(pair<P,int>(P(w_ * w_ + h_ * h_, h_), w_));
      }
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
      if(p < v[i]){
        cout << v[i].first.second << " " << v[i].second << endl;
        break;
      }
    }
  }
  return 0;
}