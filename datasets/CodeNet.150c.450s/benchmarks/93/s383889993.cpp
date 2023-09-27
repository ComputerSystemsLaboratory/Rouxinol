#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int partition(vector<pair<char, int> >& v, int p, int r)
{
  int val = v[r].second;
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if (v[j].second <= val) {
      ++i;
      swap(v[i], v[j]);
    }
  }
  swap(v[i + 1], v[r]);
  return i + 1;
}

void quickSort(vector<pair<char, int> >& v, int l, int r)
{
  if (l >= r) { return; }
  int q = partition(v, l, r);
  quickSort(v, l, q - 1);
  quickSort(v, q + 1, r);
}

static bool cmp(const pair<char, int>& p1, const pair<char, int>& p2)
{
  return p1.second < p2.second;
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<pair<char, int> > v(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, " %c %d", &v[i].first, &v[i].second);
  }
  vector<pair<char, int> > u(v);
  stable_sort(u.begin(), u.end(), cmp);
  quickSort(v, 0, n - 1);
  fprintf(stdout, "%s\n", u == v ? "Stable" : "Not stable");
  for (int i = 0; i < n; ++i) {
    fprintf(stdout, "%c %d\n", v[i].first, v[i].second);
  }
  return 0;
}