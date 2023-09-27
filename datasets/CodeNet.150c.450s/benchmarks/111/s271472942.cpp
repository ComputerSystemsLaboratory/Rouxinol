#include <cstdio>
#include <vector>
using namespace std;

int main(void) {
	int n; scanf("%d", &n);
	vector<int> num(n);
	for(int i = 0; i < n; i++)
		scanf("%d", &num[i]);

	vector<long long> ans(21);
	ans[num[0]] = 1;
	for(int i = 1; i < n - 1; i++) {
		vector<long long> tmp(21);
		for(int j = 0; j <= 20; j++) {
			if(ans[j] != 0) {
				if(j - num[i] >= 0)
					tmp[j - num[i]] += ans[j];
				if(j + num[i] <= 20)
					tmp[j + num[i]] += ans[j];
			}
		}
		ans = tmp;
	}
	printf("%lld\n", ans[num[n - 1]]);

	return 0;
}