#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main()
{
  int h;
  int w;

  vector<pair<int, pair<int, int>>> list;
  for(int i = 1; i <= 150; ++i) {
    for(int j = i + 1; j <= 150; ++j) {
      list.push_back(
        make_pair(i*i + j*j, make_pair(i, j))
      );
    }
  }

  sort(list.begin(), list.end());

  while(cin >> h >> w, (h|w)) {
    pair<int, pair<int, int>> p(h*h + w*w, pair<int, int>(h, w));

    for(auto v : list) {
      if(p < v) {
        cout << v.second.first << " " << v.second.second << endl;
        break;
      }
    }
  }

  return 0;
}