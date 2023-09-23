//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_C

#include <iostream>
using namespace std;
int main(){
  int n, b, f, r, v;
  //b?£?f??????r???????????¨?±????v???
  cin >> n;
  int a[4][3][10];
  //?£?,

  for(int h=0; h<4; h++){
    for(int i=0; i<3; i++){
      for(int j=0; j<10; j++){
        a[h][i][j] = 0;
      }
    }
  }//?????????

  for(int i=0; i<n; i++){
    cin >> b >> f >> r >>v;
    b -= 1; f -= 1;r -= 1;
    a[b][f][r] += v;
  }

  for(int h=0; h<3; h++){
    for(int i=0; i<3; i++){
      for(int j=0; j<10; j++){
        cout << " " << a[h][i][j];
      }
      cout << endl;
    }
    cout << "####################" << endl;
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<10; j++){
      cout << " " << a[3][i][j];
    }
    cout << endl;
  }


  return 0;
}