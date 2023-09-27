#include <bits/stdc++.h>
using namespace std;

signed main() {
	vector<string> dice(7);

	dice[1] = "##3524#";
	dice[2] = "#4#16#3";
	dice[3] = "#26##15";
	dice[4] = "#51##62";
	dice[5] = "#3#61#4";
	dice[6] = "##4253#";

	vector<int> s(7);
	map<int, int> a;
	for (int i = 1; i < 7; ++i) {
		cin >> s[i];
		a[s[i]] = i;
	}

	int N;
	cin >> N;
	
	for (int i = 0; i < N; ++i) {
	    int n, m;
	    cin >> n >> m;
	    cout << s[int(dice[a[n]][a[m]] - '0')] << endl;
	}
}

