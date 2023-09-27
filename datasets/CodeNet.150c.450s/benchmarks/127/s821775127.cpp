#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
  int n; cin >> n;
  while(n--) {
    string s; cin >> s;
    set<string> se;
    se.insert(s);
    for(int i = 1; i < s.size(); i++) {
      string f = s.substr(0, i);
      string b = s.substr(i);
      se.insert(b+f);
      reverse(all(f));
      se.insert(f+b);
      se.insert(b+f);
      reverse(all(b));
      se.insert(f+b);
      se.insert(b+f);
      reverse(all(f));
      se.insert(f+b);
      se.insert(b+f);
    }
    cout << se.size() << endl;
  }
}