#include <iostream>
#include <algorithm>
using namespace std;

const int M = 1010000;
bool p[M];

void prime() {
  fill(p, p+M, true);
  p[0] = false;
  p[1] = false;
  for(int i = 0; i < M; i++) {
    if(p[i]) {
      for(int j = 2; i*j < M; j++) {
	p[i*j] = false;
      }
    }
  }
}

int main() {
  int a, d, n;
  prime();

  while(cin >> a >> d >> n, a+d+n) {
    int cnt = 0;
    if(p[a]) cnt++;
    while(cnt != n) {
      a += d;
      if(p[a]) cnt++;
    }
    cout << a << endl;
  }
}