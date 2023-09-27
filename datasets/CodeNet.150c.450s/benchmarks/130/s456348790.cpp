//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_D

#include <iostream>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin >> a[i][j];
    }
  }
  //??????????????????
  int vec[m];
  for(int i = 0; i < m; i++){
    cin >> vec[i];
  }

  for(int i=0; i<n; i++){
    int multi = 0;
    for(int j=0; j<m; j++){
      multi += vec[j]*a[i][j];
    }
    cout << multi << endl;
  }

  return 0;
}