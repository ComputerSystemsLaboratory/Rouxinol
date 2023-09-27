#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

#define rep(i,a) for(int i = 0;i < a; i++)

using namespace std;

void solve(string line)
{
  set<string> ans;
  for (int i = 1; i < line.length(); ++i) {
    string a = line.substr(0, i);
    string b = line.substr(i, line.length() - i);
    ans.insert(a + b);
    ans.insert(b + a);
    reverse(a.begin(), a.end());
    ans.insert(a + b);
    ans.insert(b + a);
    reverse(b.begin(), b.end());
    ans.insert(a + b);
    ans.insert(b + a);
    reverse(a.begin(), a.end());
    ans.insert(a + b);
    ans.insert(b + a);
  }
  cout << ans.size() << endl;
}

int main()
{
  int m;
  cin >> m;
  rep(i, m) {
    string line;
    cin >> line;
    solve(line);
  }

  return 0;
}