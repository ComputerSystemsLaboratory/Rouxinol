#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int calc_year_days(int Y, int M, int D) {
  int count = 0;

  if (Y%3 == 0) {
    // ????????????????????\??° 
    count += (20 - D + 1);
    M++;
    
    count += (10 - M + 1)*20; 
  } else {
    // ????????????????????\??°????¨????
    if (M%2 == 1) { 
      count += (20 - D + 1);
    } else {
      count += (19 - D + 1);
    }
    M++;
    // ???????????\??°
    for (int m = M; m <= 10; m++) {
      if (m%2 == 1) {
	count += 20;
      } else {
	count += 19;
      }
    }
  }
    
  return count;
}

int solve(int Y, int M, int D) {
  int count = 0;

  count += calc_year_days(Y, M, D);
  Y++;
  for (int y = Y; y < 1000; y++) {
    if (y % 3 == 0) {
      count += (20*10);
    } else {
      count += (20*5 + 19*5);
    }
  }

  return count;
}

int main() {
  int n;
  cin >> n;
  for (int i=0; i<n; i++) {
    int y, m, d;
    cin >> y;
    cin >> m;
    cin >> d;

    printf("%d\n", solve(y, m, d));
  }
 
}