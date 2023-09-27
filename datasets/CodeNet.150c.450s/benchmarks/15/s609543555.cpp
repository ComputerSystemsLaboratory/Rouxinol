#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
	vector<int> s;
	vector<int> t;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		s.push_back(tmp);
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int tmp;
		cin >> tmp;
		t.push_back(tmp);
	}

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	int s_place = 0; // sの現在位置
	int ans = 0;     // 答え
	int t_place = 0; // tの現在位置
	int late = -1;
	while (s_place < n && t_place < q) {
		  // sのほうが大きいならtを増やす
		if (s[s_place] > t[t_place]) {
			t_place++;
		} else if (s[s_place] < t[t_place]) {
		  // tのほうが大きいならsを増やす
			s_place++;
		} else {
			// 同じかつ違う整数がヒットしたならカウントしてsを増やす
			if (late != t[t_place]) {
				ans++;
				late = t[t_place];
			}
			s_place++;
		}
	}

	cout << ans << endl;

	return 0;
}