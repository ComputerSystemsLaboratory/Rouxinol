#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<set>
#include<functional>
using namespace std;

#define INF 1<<21
#define MOD 1000000007

int tax(int a,int x) {
  int b;
  b = a*(100 + x) / 100;
  return b;
}

int main(void) {
  int x, y, s;
  int b1, b2;
  int ans;
  while (1) {
	cin >> x >> y >> s;
	ans = 0;
	if (x == 0 &&y == 0 && s == 0) {
	  return 0;
	}
	for (int i = 1; i <= s - 1; i++) {
	  b1 = tax(i, x);
	  for (int j = 1; j <= s - 1; j++) {
		b2 = tax(j, x);
		if (b1 + b2 == s) {
		  ans = max(ans, tax(i, y) + tax(j, y));
		}
	  }
	}
	cout << ans << endl;
  }
}