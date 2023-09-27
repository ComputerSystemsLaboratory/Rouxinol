#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 1000000001
#define EPS 1.0e-6

using namespace std;

typedef long long ll;

int w, n;
int a[35];

int main()
{
	scanf("%d", &w);
	scanf("%d", &n);

	for (int i = 0; i < w; i++) {
		a[i] = i;
	}

	int ai, bi;
	for (int i = 0; i < n; i++) {
		scanf("%d,%d", &ai, &bi);
		ai--; bi--;
		swap(a[ai], a[bi]);
	}
	for (int i = 0; i < w; i++) {
		cout << a[i] + 1 << endl;
	}


	return 0;
}