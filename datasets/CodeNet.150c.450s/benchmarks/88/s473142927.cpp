#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)

int main()
{
  vector<pair<int, pair<int,int>>> list;
  for(int i = 1; i <= 150; ++i) {
    for(int j = i + 1; j <= 150; ++j) {
      int v = i * i + j * j;
      list.push_back(pair<int, pair<int,int>>(v, pair<int,int>(i, j)));
    }
  }
  sort(list.begin(), list.end());
  int h, w;
  while(cin >> h >> w, (h|w)) {
    int v = h * h + w * w;
    pair<int, pair<int,int>> p(v, pair<int,int>(h, w));

    for( auto v : list ) {
      if( p < v ) {
        cout << v.second.first << " " << v.second.second << endl;
        break;
      }
    }
  }
  return 0;
}