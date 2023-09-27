/*
 * c.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

const int MAX_N = 36;

/* typedef */

typedef pair<int,char> pic;

struct Card {
  int v, i;
  char s;
  Card() {}
  Card(int _v, char _s, int _i): v(_v), s(_s), i(_i) {}
  bool operator<(const Card &c) const { return v < c.v; }
  void print() { printf("%c%d", s, v); }
};

/* global variables */

Card as[MAX_N], bs[MAX_N], cs[MAX_N];

/* subroutines */

void bubble_sort(int n, Card as[]) {
  for (int i = 0; i < n; i++)
    for (int j = n - 1; j > i; j--)
      if (as[j] < as[j - 1])
	swap(as[j], as[j - 1]);
}

void selection_sort(int n, Card as[]) {
  for (int i = 0; i < n; i++) {
    int mini = i;
    for (int j = i; j < n; j++)
      if (as[j] < as[mini])
	mini = j;
    if (i != mini) swap(as[i], as[mini]);
  }
}

bool stable(int n, Card as[]) {
  for (int i = 0; i < n; i++) {
    Card &ai = as[i];
    for (int j = i + 1; j < n && ai.v == as[j].v; j++)
      if (ai.i > as[j].i) return false;
  }
  return true;
}

void print_cards(int n, Card as[]) {
  for (int i = 0; i < n; i++) {
    if (i) putchar(' ');
    as[i].print();
  }
  putchar('\n');
}

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    cs[i] = bs[i] = as[i] = Card(s[1] - '0', s[0], i);
  }

  bubble_sort(n, bs);
  bool bst = stable(n, bs);
  print_cards(n, bs);
  cout << (bst ? "Stable" : "Not stable") << endl;
  
  selection_sort(n, cs);
  bool cst = stable(n, cs);
  print_cards(n, cs);
  cout << (cst ? "Stable" : "Not stable") << endl;

  return 0;
}