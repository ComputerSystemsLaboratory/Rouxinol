// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1141&lang=jp

#include <iostream>
#include <algorithm>
using namespace std;

const int C = 1e6 + 10;

bool isprime[C];

void init() {
  fill(isprime, isprime+C, true);
  isprime[0] = isprime[1] = false;
  for(int i=2; i<C; i++) {
    if (isprime[i]) {
      for (int j=2; j<C; j++) {
	if ( i * j >= C ) break;
	isprime[i * j] = false;
      }
    }
  }
}

int main() {
  init();
  /*for (int i=0; i<100; i++) {
    cerr << "isprime[" << i << "] is "<< isprime[i] << endl;
    } */
  int a, d, n;
  while (scanf("%d%d%d", &a, &d, &n) != EOF && a) {
    int count = 0;
    int now = a;
    while (true) {
      if (isprime[now]) {
	count++;
	// cerr << "count: " << count << ", prime: " << now << endl;
	if (count == n) break;
      }
      now += d;
    }
    printf("%d\n", now);
  }
}