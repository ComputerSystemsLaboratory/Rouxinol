#include <iostream>
using namespace std;

int main(void){
  int n, m, l;
  long long int a[200][200], b[200][200], c[200][200];

  // ?????????
  for (int i = 0; i < 200; i++) {
    for (int j = 0; j < 200; j++) {
      c[i][j] = 0;
    }
  }

  // ?????????????????????????????????
  cin >> n >> m >> l;

  // ??????A???????????????
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  
  // ??????B???????????????
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> b[i][j];
    }
  }

  // ??????C????¨??????????
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      for (int k = 0; k < m; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  // ??????(?¨?????????¨??????????????¨?????????OK)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      cout << c[i][j];
      if(j != l -1){ cout << " "; }
    }
    cout << endl;
  }

  return 0;
}