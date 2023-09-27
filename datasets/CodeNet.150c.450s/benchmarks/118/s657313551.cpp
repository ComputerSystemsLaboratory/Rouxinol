#include <bits/stdc++.h>
using namespace std;

int n, y, m, d;


int main() {
  cin >> n;
  for(int i = 0; i < n; i++) {
    int cnt = 0;
    cin >> y >> m >> d;
    while(!(y == 1000 && m == 1 && d == 1)){
      if(y % 3 == 0) {
	if(m == 10 && d == 20) {
	  d = 1; m = 1; y++; cnt++;
	}
	else if(d == 20) {
	  d = 1; m++; cnt++;
	}
	else d++, cnt++;
      }else {
	if(m % 2 == 0){
	  if(m == 10 && d == 19) {
	    d = 1; m = 1; y++; cnt++;
	  }else if(d == 19) {
	    d = 1; m++; cnt++;
	  }else d++, cnt++;
	}else {
	  if(d == 20) {
	    d = 1; m++; cnt++;
	  }else d++, cnt++;
	}
      }
    }
    cout << cnt << endl;
  }
}