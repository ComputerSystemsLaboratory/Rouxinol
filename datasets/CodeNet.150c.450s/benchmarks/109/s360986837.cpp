#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n, data[6];
	int max_mini = 0;
	
	while (cin >> n) {
		if (n == 0)break;
		int x[86401] = { 0 };
		for (int i = 0; i < n; i++) {
			scanf("%d:%d:%d %d:%d:%d",&data[0],&data[1],&data[2],&data[3],&data[4],&data[5]);
			x[data[0] * 3600 + data[1] * 60 + data[2]]++;
			x[data[3] * 3600 + data[4] * 60 + data[5]]--;
			if (max_mini < data[3] * 3600 + data[4] * 60 + data[5])
				max_mini = data[3] * 3600 + data[4] * 60 + data[5];
		}
		int ans = 0, cnt = 0;
		for (int i = 0; i <= max_mini; i++) {
			cnt += x[i];
			ans = max(ans, cnt);
		}
		cout << ans << endl;
	}
	return 0;
	
}