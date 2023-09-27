#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;
typedef long long ll;
static const double EPS = 1e-9;
static const double PI = acos(-1.0);

#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, n) for (int i = (s); i < (int)(n); i++)
#define FOREQ(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define DEC(i, s) for (int i = (s); i >= 0; i--)

#define SIZE(v) (int)((v).size())
#define MEMSET(v, h) memset((v), h, sizeof(v))
#define FIND(m, w) ((m).find(w) != (m).end())


int decode(char *str) {
  int num = 0;
  int prev = 1;
  for (int i = 0; str[i]; i++) {
    if (str[i] == 'm') { num += prev * 1000; }
    if (str[i] == 'c') { num += prev * 100; }
    if (str[i] == 'x') { num += prev * 10; }
    if (str[i] == 'i') { num += prev * 1; }
    prev = 1;
    if (isdigit(str[i])) { prev = str[i] - '0'; }
  }
  return num;
}

void decode(int num) {
  if (num >= 1000) {
    if (num >= 2000) {
      printf("%d", num / 1000);
    }
    printf("m");
  }
  num %= 1000;
  if (num >= 100) {
    if (num >= 200) {
      printf("%d", num / 100);
    }
    printf("c");
  }
  num %= 100;
  if (num >= 10) {
    if (num >= 20) {
      printf("%d", num / 10);
    }
    printf("x");
  }
  num %= 10;
  if (num >= 1) {
    if (num >= 2) {
      printf("%d", num / 1);
    }
    printf("i");
  }
  puts("");
}

int main() {
  char left[100];
  char right[100];
  int test;
  scanf("%d", &test);
  while (test--) {
    scanf("%s %s", left, right);
    int l = decode(left);
    int r = decode(right);
    decode(l + r);
  }
}