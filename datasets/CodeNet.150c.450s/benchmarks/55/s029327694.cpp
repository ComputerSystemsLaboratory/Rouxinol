#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  char buf[1024] = { '\0' };
  while (fgets(buf, sizeof(buf), stdin) != NULL) {
    if (buf[0] == '0') { break; }
    int sum = 0;
    for (char* p = buf; isdigit(*p); ++p) {
      sum += (*p - '0');
    }
    fprintf(stdout, "%d\n", sum);
  }
  return 0;
}