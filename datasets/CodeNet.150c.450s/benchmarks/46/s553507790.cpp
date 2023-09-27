#include<iostream>
using namespace std;

int check(int n, int x) {

  int c = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = i+1; j <= n; j++) {
      for(int k = j+1; k <= n; k++) {
	if (i + j + k == x) {
	  //cout << i << ","  << j << ","  << k << endl;
	  c += 1;
	}
      }
    }
  }
  
  cout << c << endl;
  
  return 0;
}



int main() {
  int n, x;

  for(;;) {
    cin >> n >> x;
    if (n == 0 && x == 0) {
      break;
    }

    check(n, x);
  }
  
  return 0;
}
