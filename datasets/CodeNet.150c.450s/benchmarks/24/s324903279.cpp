#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
  return a.second > b.second;
}

int main() {

  while(1) {
    long long n,m;
    cin >> n >> m;
    if(!(n||m)) break;

    vector<pair<int, int> > vp;
    for(int i = 0; i < n; i++) {
      int d, p;
      cin >> d >> p;
      vp.push_back(pair<int, int>(d,p));
    }
    sort(vp.begin(), vp.end(), comp);

    int num = 0, ans = 0;
    for(int i = 0; i < vp.size(); i++) {
      for(int j = 0; j < vp[i].first; j++) {
        if(num >= m) ans += vp[i].second;
        num++;
      }
    }
    cout << ans << endl;

  }

	return 0;
}