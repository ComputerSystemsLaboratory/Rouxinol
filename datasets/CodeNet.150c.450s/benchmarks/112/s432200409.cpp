#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
  int N, M;
  while (scanf("%d ", &N) == 1) {
    if (N == 0) {
      break;
    }
    map<char, char> m;
    char d, s;
    for (int i = 0; i < N; i++) {
      scanf("%c %c ", &s, &d);
      m[s] = d;
    }
    scanf("%d ", &M);
    char c;
    for (int i = 0; i < M; i++) {
      scanf("%c ", &c);
      if (m.count(c) == 1) {
	c = m[c];
      }
      putchar(c);
    }
    puts("");
  }
  return 0;
}