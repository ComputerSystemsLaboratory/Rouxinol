#include <bits/stdc++.h>
using namespace std;
//using ll = long long;
#define MAX 100000000000000;

/*
int MCM(int i, int j, int p[]) {
  int min = MAX;
  if (i == j) return 0;
  if (i < j) {
    int temp;
    for (int k = i; k < j; k++) {
      temp = MCM(i, k, p)+MCM(k+1, j, p)+p[i-1]*p[k]*p[j];
      if (min > temp) min = temp;
    }
  }
  return min;
}
*/

int main(void) {
  int n; cin >> n;
  int r[n]; int c[n];
  for (int i = 0; i < n; i++) {
    cin >> r[i] >> c[i];
  }

  long long m[n+1][n+1]; int p[n+1];
  for (int i = 0; i < n; i++) p[i] = r[i]; p[n] = c[n-1];
  for (int i = 1; i <= n; i++) m[i][i] = 0;
  //int ans = MCM(1, n, p);
  //cout << ans << endl;  
  for (int k = 1; k < n; k++) { //kはm[i][j]におけるj-iの値
    for (int i = 1; i+k <= n; i++) { //iはm[i][j]におけるi
    long long temp; m[i][i+k] = MAX; //tempmin_はm[i][i+k]の値
      for (int l = i; l < i+k; l++) { //lはm[i][i+k]を分割する地点
        temp = m[i][l]+m[l+1][i+k]+p[i-1]*p[l]*p[i+k];
        if (m[i][i+k] > temp) m[i][i+k] = temp;
      }
    }
  }
  cout << m[1][n] << endl;
}
