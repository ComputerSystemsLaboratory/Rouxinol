#include<iostream>
#include<cstdio>
using namespace std;
int main() {
  int w, n, a[30], b[30], c[30];
  cin >> w;
  cin >> n;
  for (int i = 0; i < n; i++) {
    scanf("%d,%d", &a[i], &b[i]);
    a[i]--;
    b[i]--;  
  }
  for (int i = 0; i < w; i++) {
    c[i] = i;
  }
  for (int i = 0; i < n; i++) {
    int d = a[i];
    int e = b[i];
    swap (c[d], c[e]);
  }
  for (int i = 0; i < w; i++) {
    cout << c[i] + 1 << endl;
  }
}