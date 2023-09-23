#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<string.h>
#include<set>
#include<functional>
#include <cmath>
using namespace std;

#define INF 1<<21
#define MOD 1000000007
#define MAX 1000000

int main() {
  char p[MAX];
  memset(p, 1, sizeof(p));
  p[0] = 0;
  p[1] = 0;
  for (int i = 2; i <= sqrt(MAX)+1; i++) {
	if (p[i] == 1) {
	  for (int j = 2*i; j <= MAX; j += i) {
		p[j] = 0;
	  }
	}
  }

  int a, d, n;
  while (1) {
	cin >> a >> d >> n;
	if (a == 0 && d == 0 && n == 0)return 0;
	while (1) {
	  if (p[a] == 1) n--;
	  if (n == 0) {
		cout << a << endl;
		break;
	  }
	  a += d;
	}
  }
}