#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  char p[128] = { '\0' }, s[128] = { '\0' };
  fscanf(stdin, "%s", s);
  fscanf(stdin, "%s", p);
  string ss = string(s) + string(s), pp(p);
  string ans = "No";
  if (ss.find(p, 0) != string::npos) {
    ans = "Yes";
  }
  fprintf(stdout, "%s\n", ans.c_str());
  return 0;
}