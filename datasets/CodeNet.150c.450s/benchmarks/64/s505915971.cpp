#include <iostream>

using namespace std;

#define MAX_A_NUM 2000
#define MAX_M_NUM 2000

int flags[MAX_A_NUM];

bool check_rec(int n, int a[], int m, int p) {
  if(p == n) {
    int x = 0;
    for(int i=0; i<n; i++) {
      if(flags[i] == 1) {
        x += a[i];
      }
    }
    if(x == m) {
      return true;
    }
    return false;
  }


  if(check_rec(n, a, m, p+1))
    return true;
  flags[p] = 1;
  if(check_rec(n, a, m, p+1))
    return true;
  flags[p] = 0;

  return false;
}

bool check(int n, int a[], int m) {
  for(int i=0; i<n; i++) {
    flags[i] = 0;
  }

  return check_rec(n, a, m, 0);
}

int main() {
  int n, q, m;
  int a[MAX_A_NUM];
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
  cin >> q;
  for(int i=0; i<q; i++) {
    cin >> m;
    if(check(n, a, m)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
}