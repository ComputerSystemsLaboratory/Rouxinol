#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp1[1000500];
int dp2[1000500];

int main(void)
{
	vector <int> data;
	int n = 1;
	while (1){
		int tmp = n * (n + 1) * (n + 2) / 6;
		if (1000000 < tmp) break;
		data.push_back(tmp);
		n++;
	}
	fill(dp1, dp1 + 1000500, 99999);
	fill(dp2, dp2 + 1000500, 99999);
	dp1[0] = dp2[0] = 0;
	for (int i = 0; i < 1000500; i++){
		for (int j = 0; j < data.size(); j++){
			if (1000500 < i + data[j]) break;
			dp1[i + data[j]] = min(dp1[i + data[j]], dp1[i] + 1);
		}
	}
	for (int i = 0; i < 1000500; i++){
		for (int j = 0; j < data.size(); j++){
			if (1000000 < i + data[j]) break;
			if (data[j] % 2 == 1) dp2[i + data[j]] = min(dp2[i + data[j]], dp2[i] + 1);
		}
	}

	while (cin >> n, n){
		cout << dp1[n] << " " << dp2[n] << endl;
	}

	return 0;
}