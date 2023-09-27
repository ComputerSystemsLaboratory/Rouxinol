#include <bits/stdc++.h>
using namespace std;

int n;
char buf[114514];

int main() {
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf(" %s", buf);

    string s(buf);
    set<string> dic;
    for (int i=1; i<=s.size()-1; i++) {
      string s1 = s.substr(0, i);
      string s2 = s.substr(i);

      dic.insert(s1+s2);
      dic.insert(s2+s1);
      reverse(s1.begin(), s1.end());
      dic.insert(s1+s2);
      dic.insert(s2+s1);
      reverse(s2.begin(), s2.end());
      dic.insert(s1+s2);
      dic.insert(s2+s1);
      reverse(s1.begin(), s1.end());
      dic.insert(s1+s2);
      dic.insert(s2+s1);
    }

    printf("%d\n", (int)dic.size());
  }
}