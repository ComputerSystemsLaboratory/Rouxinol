#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int search(int beg, int end, int value, vector<int> seq)
{

  int mid = -1;
  while (end - beg > 1) {
    mid = (beg + end) / 2;
    if (seq[mid] == value) { return mid; }
    else if (value < seq[mid]) {
      end = mid;
    }
    else {
      beg = mid;
    }
  }
  if (value <= seq[beg]) { return beg; }
  else { return end; }
}

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
      int pos = search(0, seq.size() - 1, a[i], seq);
      seq[pos] = a[i];
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