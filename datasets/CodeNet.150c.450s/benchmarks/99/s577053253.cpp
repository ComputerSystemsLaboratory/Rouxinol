#include <bits/stdc++.h>
using namespace std;

int n;
char buf1[114514191];
char buf2[114514191];

int ConvertInt(string s) {
  int ret = 0;
  map<char, int> mcxi;

  mcxi['m'] = 1000;
  mcxi['c'] = 100;
  mcxi['x'] = 10;
  mcxi['i'] = 1;
  for (int i=0; i<s.size(); i++) {
    if (mcxi[s[i]]) {
      int m = 1;
      if (i-1 >= 0 && !mcxi[s[i-1]]) {
        m = s[i-1] - '0';
      }

      ret += m * mcxi[s[i]];
    }
  }

  return ret;
}

string MCXI(int t) {
  int cs[5];
  string ret;

  for (int i=0; i<4; i++) {
    cs[i] = t%10;
    t /= 10;
  }

  for (int i=3; i>=0; i--) {
    if (cs[i] == 0) continue;
    if (cs[i] != 1) ret += ('0'+cs[i]);
    ret += "ixcm"[i];
  }

  return ret;
}

int main() {
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf(" %s", buf1);
    scanf(" %s", buf2);
    int a = ConvertInt(buf1);
    int b = ConvertInt(buf2);
    printf("%s\n", MCXI(ConvertInt(buf1)+ConvertInt(buf2)).c_str());
  }
}