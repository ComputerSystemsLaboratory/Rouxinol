#include <bits/stdc++.h>

using namespace std;

#define AC return 0

typedef long long ll;

const int inf = 0x3f3f3f3f;

int n, k;
int arr[100010];

bool pd(int mid) {
	int now = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (mid < arr[i]) return false;
		if (now + arr[i] <= mid) now += arr[i];
		else {
			now = arr[i];
			++ans;
		}
	}
	if (now) ++ans;
	return ans <= k;
}

int main() {
	int l = 0, r = inf;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	while (l < r) {
		int mid = l + r >> 1;
		if (pd(mid)) r = mid;
		else l = mid + 1;
	}
	printf("%d\n", l);
	AC;
}
