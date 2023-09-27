//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1159

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, p;
  while (scanf("%d%d", &n, &p) != EOF && n && p) {
    int a[50];
    fill(a, a+50, 0);
    int cur = 0;
    int res = p;
    while(true) {
      if (res > 0) {
	a[cur]++;
	res--;
      } else {
	if (a[cur] == p) break;
	res = a[cur];
	a[cur] = 0;
      }
      cur = (cur+1)%n;
    }
    printf("%d\n", cur);
  }
}