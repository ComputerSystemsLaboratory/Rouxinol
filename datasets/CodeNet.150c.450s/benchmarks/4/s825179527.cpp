#include<iostream>
using namespace std;

int main() {
  int m[10000], f[10000], r[10000];
  int n = 0;
  for (;;n++) {
    cin >> m[n] >> f[n] >> r[n];
    if (m[n] == -1 && f[n] == -1 && r[n] == -1) {
      break;
    }
  }

  for ( int i = 0; i < n; i++) {
    if (m[i] == -1 || f[i] == -1) {
      cout << "F" << endl;
    } else if(m[i] + f[i] >= 80) {
      cout << "A" << endl;
    } else if(m[i] + f[i] >= 65){
      cout << "B" << endl;
    } else if(m[i] + f[i] >= 50){
      cout << "C" << endl;
    } else if(m[i] + f[i] >= 30 && r[i] >= 50) {
      cout << "C" << endl;
    } else if(m[i] + f[i] >= 30) {
      cout << "D" << endl;
    } else {
      cout << "F" << endl;
    }
  }
  
  //  for (int i = 0; i < n; i++) {
  //  cout << m[i] << f[i] << r[i] << endl;
  //}

  return 0;
}

