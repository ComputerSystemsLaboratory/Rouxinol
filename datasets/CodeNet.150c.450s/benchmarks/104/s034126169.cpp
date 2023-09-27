#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  // ifstream cin("../test.txt");
  int w,n;
  int a[30],b[30],c[30];
  cin >> w >> n;
  for (int i = 0; i < w; i++) {
    c[i] = i+1;
  }
  char x;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> x >> b[i];
    // cout << a[i] << " " << b[i] << endl;
  }
  for (int i = 0; i < n; i++) {
    // swap(c[a[i]-1], c[b[i]-1]);
    int k = a[i] - 1;
    int j = b[i] - 1;
    int tmp = c[k];
    c[k] = c[j];
    c[j] = tmp;
  }
  for (int i = 0; i < w; i++) {
    cout << c[i] << endl;
  }
}