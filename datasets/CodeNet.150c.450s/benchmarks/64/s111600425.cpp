#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 50

int A[MAX];
int n;


int check(int i, int m) {
  if ( m == 0 ) return 1;
  else if ( i >= n ) return 0;
  int res = check(i + 1, m) || check(i + 1, m - A[i]);
  return res;
}

int main() {
  int q, key;

  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    scanf("%d", &A[i]);
  }

  cin >> q;
  for ( int i = 0; i < q; i++ ) {
    cin >> key;
    if ( check(0, key) ) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}