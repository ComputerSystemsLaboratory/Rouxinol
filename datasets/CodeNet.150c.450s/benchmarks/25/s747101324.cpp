#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  vector<int> occ(128, 0);
  int ch = -1;
  while ((ch = getchar()) != EOF) {
    ++occ[tolower(ch)];
  }
  for (int i = 'a'; i <= 'z'; ++i) {
    fprintf(stdout, "%c : %d\n", i, occ[i]);
  }
  return 0;
}