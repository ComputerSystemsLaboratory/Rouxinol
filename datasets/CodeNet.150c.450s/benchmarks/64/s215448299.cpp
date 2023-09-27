#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<set>
#include<map>

using namespace std;

int main() {
	const int SIZE = 2001;
	bool dp[SIZE] = { false };
	
	int n;
	int m;
	int ary[20];
	vector<int> vec;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ary[i];
	}

	vec.push_back(0);
	dp[0] = true;
	for (int i = 0; i < n; i++) {
		int s = vec.size();
		for (int j = 0; j < s; j++) {
			if (dp[vec[j] + ary[i]] == false) {
				dp[vec[j] + ary[i]] = true;
				vec.push_back(vec[j] + ary[i]);
			}
		}
	}
	
	cin >> m;
	for (int i = 0; i < m; i++) {
		int v;
		cin >> v;
		if (dp[v]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}