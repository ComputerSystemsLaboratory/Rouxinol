#include<iostream>
using namespace std;

int main() {
  int a[4][3][10] = {0};

  int num;
  cin >> num;

  int b,f,r,v;
  while (cin >> b >> f >> r >> v) {
    if (a[b-1][f-1][r-1] == 0) { 
      a[b-1][f-1][r-1] = v;
      num--;
    } else {
      a[b-1][f-1][r-1] += v;
    }
    if (num == 0) break;
  }
  
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
	cout << " " << a[i][j][k];
      }
      cout << endl;
    }
    if (i != 3) cout << "####################" << endl;
  }

}  
    