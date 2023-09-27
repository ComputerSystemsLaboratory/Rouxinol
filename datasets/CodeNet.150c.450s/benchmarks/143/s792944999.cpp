#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>

typedef unsigned long ULONG;

using namespace std;
int main(){
  int n, q;
  vector<ULONG> b, c;
  cin >> n;
  
  map<ULONG, ULONG> a; 
  for(int i = 0; i < n; i++) {
    ULONG tmp_a;
    cin >> tmp_a;
    auto itr = a.find(tmp_a);
    if(itr == a.end()) {
      a.insert(make_pair(tmp_a, 1UL));
    } else {
      itr->second++;
    }
  }

  cin >> q;
  for(int i = 0; i < q; i++) {
    ULONG tmp_b, tmp_c;
    cin >> tmp_b >> tmp_c;
    b.push_back(tmp_b);
    c.push_back(tmp_c);
  }

  ULONG sum = 0UL;
  for(auto itr = a.begin(); itr != a.end(); ++itr) {
    sum += (itr->first * itr->second);
  }

  for(int i = 0; i < q; i++) {
    auto itr = a.find(b[i]);
    if(itr != a.end()) {
      ULONG tmp_cnt = itr->second;
      a.erase(b[i]);
      sum -= b[i]*tmp_cnt;

      auto tmp_itr = a.find(c[i]);
      if(tmp_itr == a.end()) {
        a.insert(make_pair(c[i], itr->second));
      } else {
        tmp_itr->second += tmp_cnt;
      }
      sum += c[i]*tmp_cnt;
    }
    cout << sum << endl;
  }

  return 0;
}
