#include <cstdio>
#include <string>

using namespace std;

int fromMCXI(const string &s) {
  int res = 0, t = 1;
  for (int i=0;i<s.size();i++) {
    switch (s[i]) {
    case 'm': res += t*1000; t = 1;break;
    case 'c': res += t*100; t = 1; break;
    case 'x': res += t*10; t = 1; break;
    case 'i': res += t; t = 1; break;
    default: t = s[i]-'0'; break;
    }
  }
  return res;
}

string toMCXI(int x) {
  string res = "";
  if (2000 <= x) res += (char)('0'+x/1000);
  if (1000 <= x) res += 'm';
  x %= 1000;
  if (200 <= x) res += (char)('0'+x/100);
  if (100 <= x) res += 'c';
  x %= 100;
  if (20 <= x) res += (char)('0'+x/10);
  if (10 <= x) res += 'x';
  x %= 10;
  if (2 <= x) res += (char)('0'+x);
  if (1 <= x) res += 'i';
  return res;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i=0;i<n;i++) {
    char buf[1001];
    string s1, s2;
    scanf("%s", buf); s1 = buf;
    scanf("%s", buf); s2 = buf;
    printf("%s\n", toMCXI(fromMCXI(s1)+fromMCXI(s2)).c_str());
  }
  return 0;
}