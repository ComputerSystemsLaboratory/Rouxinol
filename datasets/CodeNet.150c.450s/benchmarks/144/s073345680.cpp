#include <iostream>
#include <cstring>

using namespace std;

int main (void) {
  int n, m, l;
  cin >> n >> m >> l;
  
  int a[n][m],b[m][l];
  
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> a[i][j];
    }
  }
  
  for (int i=0; i<m; i++) {
    for (int k=0; k<l; k++) {
      cin >> b[i][k];
    }
  }
  
  long long c[n][l];
  memset(c,0,sizeof(c));
  
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      for (int k=0; k<l; k++) {
        c[i][k] += a[i][j]*b[j][k];
      }
    }
  }
  
  for (int i=0; i<n; i++) {
    for (int k=0; k<l; k++) {
      if (k != 0) {
        cout << " " << flush;
      }
      cout << c[i][k] << flush;     
    }
    cout << endl;
  }
}