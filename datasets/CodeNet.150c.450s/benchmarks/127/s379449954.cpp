#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
#define rep(i,n) for (int i=0; i < (n); i++)

int main() {
  int n;
  cin >> n;
  rep(_,n) {
    string s;
    cin >> s;
    map<string, bool> dic;
    for (int i = 1; i < s.size(); i++) {
      string ls = s.substr(0,i);
      string rs = s.substr(i);

      dic[ls+rs] = dic[rs+ls] = true;
      reverse(ls.begin(), ls.end());
      dic[ls+rs] = dic[rs+ls] = true;
      reverse(rs.begin(), rs.end());
      dic[ls+rs] = dic[rs+ls] = true;
      reverse(ls.begin(), ls.end());
      dic[ls+rs] = dic[rs+ls] = true;
    }
    cout << dic.size() << endl;
  }


  return 0;
}