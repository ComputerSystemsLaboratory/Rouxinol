#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <algorithm>
#include <bitset>
#include <complex>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include <cassert>
#include <functional>

typedef long long ll;
using namespace std;

#ifndef LOCAL
#define debug(...) ;
#else
#define debug(...) cerr << __LINE__ << " : " << #__VA_ARGS__ << " = " << _tostr(__VA_ARGS__) << endl;

template<typename T>
ostream &operator<<(ostream &out, const vector<T> &v);

template<typename T1, typename T2>
ostream &operator<<(ostream &out, const pair<T1, T2> &p) {
  out << "{" << p.first << ", " << p.second << "}";
  return out;
}

template<typename T>
ostream &operator<<(ostream &out, const vector<T> &v) {
  out << '{';
  for (const T &item : v) out << item << ", ";
  out << "\b\b}";
  return out;
}

void _tostr_rec(ostringstream &oss) {
  oss << "\b\b \b";
}

template<typename Head, typename... Tail>
void _tostr_rec(ostringstream &oss, Head &&head, Tail &&... tail) {
  oss << head << ", ";
  _tostr_rec(oss, forward<Tail>(tail)...);
}

template<typename... T>
string _tostr(T &&... args) {
  ostringstream oss;
  int size = sizeof...(args);
  if (size > 1) oss << "{";
  _tostr_rec(oss, forward<T>(args)...);
  if (size > 1) oss << "}";
  return oss.str();
}
#endif

#define mod 1000000007 //1e9+7(prime number)
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 200010

vector<int> G[SIZE];
int ans[SIZE];

int main() {
  int N, M;

  scanf("%d%d", &N, &M);

  for (int i = 0; i < M; i++) {
    int A, B;
    scanf("%d%d", &A, &B);
    A--;
    B--;

    G[A].push_back(B);
    G[B].push_back(A);
  }

  queue<int> q1, q2;

  q1.push(0);

  for (int i = 0; i < N; i++) ans[i] = -1;

  while (q1.size()) {
    while (q1.size()) {
      auto p = q1.front();
      q1.pop();

      for (int to : G[p]) {
        if (ans[to] == -1) {
          q2.push(to);
          ans[to] = p + 1;
        }
      }
    }
    swap(q1, q2);
  }

  puts("Yes");

  for (int i = 1; i < N; i++) {
    printf("%d\n", ans[i]);
  }

  return 0;
}