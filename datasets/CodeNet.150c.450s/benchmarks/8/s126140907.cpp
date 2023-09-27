#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n;
  cin >> n;
  int taro = 0, hanako = 0;
  for (int i = 0; i < n; ++i) {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) { ++taro, ++hanako; }
    else if (s1 > s2) { taro += 3; }
    else { hanako += 3; }
  }
  fprintf(stdout, "%d %d\n", taro, hanako);
  return 0;
}