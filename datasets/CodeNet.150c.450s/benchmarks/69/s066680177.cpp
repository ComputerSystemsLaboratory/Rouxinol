#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  int n; cin >> n;
  while(n--) {
    stack<int> sta[2];
    vi a(10); rep(i, 10) cin >> a[i];
    bool b = true;
    rep(i, 10) {
      int x = a[i];
      if(i == 0) sta[0].push(x);
      else if(sta[1].empty()) {
        if(sta[0].top() < x) sta[0].push(x);
        else sta[1].push(x);
      } else {
        if(sta[0].top() > x && sta[1].top() > x) {
         b = false;
         break;
        } else if(sta[0].top() > sta[1].top()) {
          if(sta[0].top() < x) sta[0].push(x);
          else sta[1].push(x);
        } else {
          if(sta[1].top() < x) sta[1].push(x);
          else sta[0].push(x);
        }
      }
    }
    if(b) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}