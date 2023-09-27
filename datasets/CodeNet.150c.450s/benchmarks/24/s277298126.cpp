#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int N, M;
  while(cin >> N >> M && (N|M)) {
    vector<pair<int, int> > vec;
    int expect = 0;
    for(int i=0; i<N; i++) {
      int d, p;
      cin >> d >> p;
      vec.push_back(make_pair(p, d));
      expect += d * p;
    }
    sort(vec.begin(), vec.end(), greater<pair<int, int> >());
    for(int i=0; i<N; i++) {
      expect -= vec[i].first * min(vec[i].second, M);
      M -= vec[i].second;
      if(M <= 0) break;
    }
    cout << expect << endl;
  }
  
  return 0;
}