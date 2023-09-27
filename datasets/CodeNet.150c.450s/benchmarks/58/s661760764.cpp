#define dbg(...) fprintf(stderr,__VA_ARGS__)
#define dpr(x) cerr<<#x<<": "<<x<<endl;
#define dprc(c) do{cerr<<#c<<":";for(auto&_i:(c)){cerr<<" "<<_i;}cerr<<endl;}while(0)
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int INF = 1e9+7;
#define all(c) (c).begin(), (c).end()
#define tr(i,c) for(auto i=(c).begin();i!=(c).end();i++)
#define rtr(i,c) for(auto i=(c).rbegin();i!=(c).rend();i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

int main(int argc, char **argv)
{
  vector<function<int(int, int)>> ops = {
    [](int a, int b) { return a + b; },
    [](int a, int b) { return a - b; },
    [](int a, int b) { return a * b; },
  };
  stack<int> stk;
  string s;
  while (cin >> s) {
    auto k = string("+-*").find(s[0]);
    if (k != string::npos) {
      int b = stk.top(); stk.pop();
      int a = stk.top(); stk.pop();
      int r = ops[k](a, b);
      stk.push(r);
    } else {
      stk.push(stoi(s));
    }
  }
  cout << stk.top() << endl;
  return 0;
}