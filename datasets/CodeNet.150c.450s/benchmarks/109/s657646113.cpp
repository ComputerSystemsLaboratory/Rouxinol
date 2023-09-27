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

int main(void) {
  int n;
  int hh1, mm1, ss1, hh2, mm2, ss2;
  int a, b;
  int ans;
  int buri[90000];
  while (1) {
	cin >> n;
	if (n == 0) return 0;
	ans = 0;
	fill(buri, buri + 90000, 0);
	for (int i = 0; i < n; i++) {
	  scanf("%d:%d:%d%d:%d:%d", &hh1, &mm1, &ss1, &hh2, &mm2, &ss2);
	  a = 3600 * hh1 + 60 * mm1 + ss1;
	  b = 3600 * hh2 + 60 * mm2 + ss2;
	  for (int j = a; j < b; j++) {
		buri[j]++;
		ans = max(ans, buri[j]);
	  }
	}
	cout << ans << endl;
  }
}