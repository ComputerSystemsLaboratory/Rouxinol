#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int solve(vector<int> a)
{
  int n = a.size();
  vector<int> seq;
  seq.push_back(a[0]);
  for (int i = 1; i < n; ++i) {
    if (a[i] > seq.back()) {
      seq.push_back(a[i]);
    }
    else {
      //int pos = search(0, seq.size() - 1, a[i], seq);
      //seq[pos] = a[i];
      vector<int>::iterator iter = lower_bound(seq.begin(), seq.end(), a[i]);
      *iter = a[i];
    }
  }
  return seq.size();
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%d", &a[i]);
  }
  int ans = solve(a);
  fprintf(stdout, "%d", ans);
  fprintf(stdout, "\n");
  return 0;
}