
#include <iostream> 
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <deque>  
#include <iomanip>

using namespace std;

using ll = long long;
#define INF 1e9
#define MOD 1e9 + 7
#define rep(i, n) for(int i = 0; i < n; i++)
#define loop(i, a, n) for(int i = a; i < n; i++)
#define all(in) in.begin(), in.end()

int a[100];
int main() {
	int n; scanf("%d", &n);
	rep(i, n) {
		scanf("%d", &a[i]);
	}
	rep(i, n) {
		if (i)printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
	for (int i = 1; i < n; i++) {
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
		rep(i, n) {
			if (i)printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
}
