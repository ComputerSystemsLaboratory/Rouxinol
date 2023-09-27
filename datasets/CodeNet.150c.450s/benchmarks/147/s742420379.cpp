#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  //f(n)の個数を調べる
  for(int i = 1; i <= n; i++) {
    int count = 0;
    //x, y, z全探索してnと合致しているか調べる
    for(int j = 1; j <= 105; j++) {
      for(int k = 1; k <= 105; k++) {
        for(int l = 1; l <= 105; l++) {
	        int a = j*j + k*k + l*l + j*k + k*l + l*j;
    	    if(a == i) {
              //cout << a << n << j << k << l << endl;
              count++;
            }
          	else if (a > i) break;
        }
      }
    }
  cout << count << endl;
  }

}