#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(void){
  int h, w;
  vector<pair<int, pair<int, int> > > v;

  for(int i=1; i<150; i++){
    for(int j=2; j<=150; j++){
      if(i < j)
        v.push_back(make_pair(pow(i, 2) + pow(j, 2), make_pair(i, j)));
    }
  }
  sort(v.begin(), v.end());

  while(cin >> h >> w, h || w){
    int brd = pow(h, 2) + pow(w, 2);

    for(int i=0; i<v.size(); i++){
      if((brd == v[i].first && h < v[i].second.first) || brd < v[i].first){
        cout << v[i].second.first << " " << v[i].second.second << endl;
        break;
      }
    }
  }

  return 0;
}