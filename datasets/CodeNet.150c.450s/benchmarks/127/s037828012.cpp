#include <cstdio>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main() {
  int m;
  scanf("%d", &m);
  for (int i=0;i<m;i++) {
    char buf[100];
    scanf("%s", buf);
    string s = buf;
    set<string> ss;
    for (int j=1;j<s.size();j++) {
      const string s1 = s.substr(0, j);
      string rs1 = s1;
      reverse(rs1.begin(), rs1.end());
      const string s2 = s.substr(j, s.size()-j);
      string rs2 = s2;
      reverse(rs2.begin(), rs2.end());
      ss.insert(s1+rs2);
      ss.insert(s2+s1);
      ss.insert(s2+rs1);
      ss.insert(rs1+s2);
      ss.insert(rs1+rs2);
      ss.insert(rs2+s1);
    }
    printf("%lu\n", ss.size());
  }
  return 0;
}