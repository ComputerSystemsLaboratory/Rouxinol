#include <iostream>
#include <map>

#define debug(x) cout << #x << "==" << x << endl;

using namespace std;

//??\???

int conv(string s) {
  string hh="", mm="", ss="";
  hh += s[0]; hh += s[1];
  mm += s[3]; mm += s[4];
  ss += s[6]; ss += s[7];

  return stoi(hh) * 60 * 60 + stoi(mm) * 60 + stoi(ss);
}

int main() {
  ios::sync_with_stdio(false);

  int N;
  while(cin >> N) {

    if(N == 0) break;

    map<int,int> imos;
    for(int i = 0; i < N; i++) {
      string s1, s2;
      cin >> s1 >> s2;
      imos[ conv(s1) ] += 1;
      imos[ conv(s2) ] -= 1;
    }

    int mx = 0, num = 0;
    for(map<int,int>::iterator it = imos.begin(); it != imos.end(); it++) {
      num += (it -> second);
      mx = max(mx, num);
    }
    cout << mx << endl;
  }

  return 0;
}