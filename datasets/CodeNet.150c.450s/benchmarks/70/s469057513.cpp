#include <cstdio>
#include <algorithm>
#include <functional>
#include <stack>
#include <cmath>
#include <map>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define llong long long

int main() {
  int m,d;
  while(1) {
    scanf("%d %d", &m, &d);
    if(m == 0 && d == 0) break;
    int t = 3;
    if(m > 1) t += 31;
    if(m > 2) t += 29;
    if(m > 3) t += 31;
    if(m > 4) t += 30;
    if(m > 5) t += 31;
    if(m > 6) t += 30;
    if(m > 7) t += 31;
    if(m > 8) t += 31;
    if(m > 9) t += 30;
    if(m > 10) t += 31;
    if(m > 11) t += 30;
    t += d-1;
    switch(t%7) {
    case(0):
      printf("Monday\n");
      break;
    case(1):
      printf("Tuesday\n");
      break;
    case(2):
      printf("Wednesday\n");
      break;
    case(3):
      printf("Thursday\n");
      break;
    case(4):
      printf("Friday\n");
      break;
    case(5):
      printf("Saturday\n");
      break;
    case(6):
      printf("Sunday\n");
      break;
    }
  }
  return 0;
}