#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define LOOP(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) LOOP(i, 0, n)
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359

string reverse(string s) {
  string ret;
  for(int i=s.size()-1; i>=0; i--) {
    ret += s[i];
  }

  return ret;
}

int main(void) {
  int n;
  cin >> n;
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    set<string> s;
    for(int j=1; j<str.size(); j++) {
      string left = str.substr(0, j), right = str.substr(j);
      //cout << left << " " << right << endl;
      s.insert(left+right);
      s.insert(left+reverse(right));
      s.insert(reverse(left)+right);
      s.insert(reverse(left)+reverse(right));
      s.insert(right+left);
      s.insert(reverse(right)+left);
      s.insert(right+reverse(left));
      s.insert(reverse(right)+reverse(left));
    }
    /*for(auto itr = s.begin(); itr != s.end(); ++itr) {
        cout << *itr << "\n";
    }*/
    ans.push_back(s.size());
  }

  for(int i=0; i<n; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}