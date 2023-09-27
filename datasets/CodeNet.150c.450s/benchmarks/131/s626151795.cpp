#include <bits/stdc++.h>
using namespace std;

string tos(int a) {
  stringstream ss;
  ss << a;
  return ss.str();
}

int main() {
  string a;
  int L;
  while(cin >> a >> L && !(a == "0" && L == 0)) {
    map<string, int> m;
    m[a] = 0;
    for(int i = 1; ; ++i) {
      while(a.size() < L) a = "0" + a;
      sort(a.begin(), a.end());
      string maxi = a, mini = a;
      do {
        maxi = max(maxi, a);
        mini = min(mini, a);
      } while(next_permutation(a.begin(), a.end()));
      a = tos(atoi(maxi.c_str()) - atoi(mini.c_str()));
      if(m.count(a)) {
        cout << m[a] << " " << atoi(a.c_str()) << " " << i - m[a] << endl;
        break;
      }
      m[a] = i;
    }
  }
  return 0;
}