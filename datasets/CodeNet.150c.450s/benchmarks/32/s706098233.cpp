#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string.h>
#include<string>
#include<functional>
#include<iomanip>
using namespace std;

#define INF 1<<21
#define DIV 1000000007

int main() {
  int m, nmin, nmax;
  while (cin >> m >> nmin >> nmax, (m || nmin || nmax)) {
	int p[10005];
	int gap = 0, gap1=0, gap2=0;
	int ans = 0;
	for (int i = 1; i <= m; i++) {
	  cin >> p[i];
	}
	for (int i = nmin; i <= nmax; i++) {
	  if (gap <= p[i] - p[i+1]) {
		gap = p[i] - p[i + 1];
		ans = i;
	  }
	}
	cout << ans << endl;
  }
  return 0;
}