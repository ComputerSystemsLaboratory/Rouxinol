#include <bits/stdc++.h>

using namespace std;

#define loop(n) for(int lp=0; lp<(n); lp++)
#define ascent(i, a, b)  for(int (i)=(a); (i)<(b); (i)++)
#define descent(i, a, b) for(int (i)=(a); (i)<(b); (i)--)

int main() {
  int n, _p;
  while(cin >> n >> _p, n) {
    int m[60];
    memset(m, 0, sizeof(m));

    int i = 0;
    int p = _p;
    while(true) {
      //cout << " " << p << endl;
      if(p > 0) {
	m[i%n] ++;
	p --;

	if(m[i%n] == _p) break;
      }
      else if(p == 0) {
	p = m[i%n];
	m[i%n] = 0;
      }
      i ++;
    }
    
    cout << i%n << endl;
  }
  return 0;
}