#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for(int i = ((int) a); i < ((int) n); i++)
typedef long long ll;

int num, l;

int main(void) {
  while(cin >> num >> l, num || l) {
    map<int, int> mp;

    int cnt = 0;
    while(true) {
      vector<int> v;
      int i = 0;
      // cout << num << endl;
      if(mp.count(num) != 0) {
        cout << mp[num] << " " << num << " " << cnt - mp[num] << endl;
        break;
      }
      mp[num] = cnt;
      while(num > 0) {
        v.push_back(num % 10);
        num /= 10;
        i++;
      }
      REP(j, i, l) v.push_back(0);
      // cout << "size : " << v.size() << endl;
      sort(v.begin(), v.end());
      int mini = 0, maxi = 0;
      REP(j, 0, l) {
        mini = mini * 10 + v[j];
        maxi = maxi * 10 + v[l - j - 1];
      }
      // cout << maxi << " " << mini << endl;
      num = maxi - mini;
      cnt++;
    }
  }

  return 0;
}