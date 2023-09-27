#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int partition(vector<pair<char, pair<int, int> > >& v, int p, int r)
{
  int val = v[r].second.first;
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if (v[j].second.first <= val) {
      ++i;
      swap(v[i], v[j]);
    }
  }
  swap(v[i + 1], v[r]);
  return i + 1;
}

void quickSort(vector<pair<char, pair<int, int> > >& v, int l, int r)
{
  if (l >= r) { return; }
  int q = partition(v, l, r);
  quickSort(v, l, q - 1);
  quickSort(v, q + 1, r);
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<pair<char, pair<int, int> > > v(n);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, " %c %d", &v[i].first, &v[i].second.first);
    v[i].second.second = i;
  }
  quickSort(v, 0, n - 1);
  bool stbl = true;
  for (int i = 0; i + 1 < n; ++i) {
    if (v[i].second.first == v[i + 1].second.first) {
      if (v[i].second.second > v[i + 1].second.second) {
        stbl = false;
        break;
      }
    }
  }
  fprintf(stdout, "%s\n", stbl ? "Stable" : "Not stable");
  for (int i = 0; i < n; ++i) {
    fprintf(stdout, "%c %d\n", v[i].first, v[i].second.first);
  }
  return 0;
}