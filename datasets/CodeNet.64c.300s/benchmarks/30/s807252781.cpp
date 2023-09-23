#include <iostream>
#define REP(i, a, n) for(int a = 0; i < n; i++)
using namespace std;


int n, d, cnt;

int main(void) {
  while(cin >> n, n != 0) {
    d = 1000 - n;

    cnt = 0;
    while(d >= 500) d -= 500, cnt++;
    while(d >= 100) d -= 100, cnt++;
    while(d >=  50) d -=  50, cnt++;
    while(d >=  10) d -=  10, cnt++;
    while(d >=   5) d -=   5, cnt++;
    while(d >=   1) d -=   1, cnt++;

    cout << cnt << endl;
  }

  return 0;
}