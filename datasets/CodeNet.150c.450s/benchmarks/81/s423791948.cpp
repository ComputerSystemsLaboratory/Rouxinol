#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <cstdio>

using namespace std;

int main(){
  int n;
  int a, b, c;
  int d[10][10];
  int max_t = -1;
  int min_d = 10000;
  int sum_d;
  int min_ind = -1;
  while (true) {
    cin >> n;
    if (n==0) {
      break;
    }
    max_t = -1;
    min_d = 10000;
    min_ind = -1;
    for (int i=0;i<10;i++) {
    for (int j=0;j<10;j++) {
      d[i][j] = 10000;
    }
    d[i][i] = 0;
  }
  
  for (int i=0;i<n;i++) {
    cin >> a >> b >> c;
    d[a][b] = c;
    d[b][a] = c;
    if (a > max_t) {
	max_t = a;
      }
      if (b > max_t) {
	max_t = b;
      }

  }
  for (int k=0;k<(max_t+1);k++) {
    for (int i=0;i<(max_t+1);i++) {
      for (int j=0;j<(max_t+1);j++) {
	if (d[i][k] + d[k][j] < d[i][j]) {
	  d[i][j] = d[i][k] + d[k][j];
	}
      }
    }
  }

  for (int i=0;i<(max_t+1);i++) {
    sum_d = 0;
    for (int j=0;j<(max_t+1);j++) {
      sum_d += d[i][j];
    }
    if (min_d > sum_d) {
      min_d = sum_d;
      min_ind = i;
    }
  }
  cout << min_ind << " " << min_d << endl;
}
}