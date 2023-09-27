#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  set<string> dic;
  char order[64] = { '\0' };
  char key[64] = { '\0' };
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%s", order);
    fscanf(stdin, "%s", key);
    if (order[0] == 'i') {
      dic.insert(key);
    }
    else {
      if (dic.count(key)) {
        fprintf(stdout, "yes\n");
      }
      else {
        fprintf(stdout, "no\n");
      }
    }
  }
  return 0;
}