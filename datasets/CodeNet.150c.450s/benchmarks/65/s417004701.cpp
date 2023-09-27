#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

void bubble_sort(vector<string>& v)
{
  int n = v.size();
  for (int i = 0; i < n; ++i) {
    for (int j = n - 1; j > i; --j) {
      if (v[j - 1][1] > v[j][1]) {
        swap(v[j - 1], v[j]);
      }
    }
  }
}

void selection_sort(vector<string>& v)
{
  int n = v.size();
  for (int i = 0; i < n; ++i) {
    int ix = i;
    for (int j = i; j < n; ++j) {
      if (v[j][1] < v[ix][1]) {
        ix = j;
      }
    }
    swap(v[i], v[ix]);
  }
}

bool cmp(const string& s1, const string& s2)
{
  return s1[1] < s2[1];
}

void print(vector<string> v)
{
  int n = v.size();
  for (int i = 0; i < n; ++i) {
    if (i) { fprintf(stdout, " "); }
    fprintf(stdout, "%s", v[i].c_str());
  }
  fprintf(stdout, "\n");
}

int main()
{
  int n = 0;
  cin >> n;
  vector<string> cards(n);
  for (int i = 0; i < n; ++i) {
    cin >> cards[i];
  }
  vector<string> bubble = cards, sel = cards;
  stable_sort(cards.begin(), cards.end(), cmp);
  bubble_sort(bubble);
  selection_sort(sel);
  //print(cards);
  print(bubble);
  fprintf(stdout, "%s\n", cards == bubble ? "Stable" : "Not stable");
  print(sel);
  fprintf(stdout, "%s\n", cards == sel ? "Stable" : "Not stable");
  return 0;
}