#include <bits/stdc++.h>
using namespace std;
#define MAX 105

int main(void) {
	int d[MAX], f[MAX];
	int n, u, k, v, i, j;
	vector<vector<int> > vec;
	vector<int> ve;
	vec.push_back(ve);
	cin >> n;
	for (i = 1; i <= n; i++) {
		ve.clear();
		d[i] = f[i] = 0;
		cin >> u >> k;
		ve.push_back(k);
		while (k--) {
			cin >> v;
			ve.push_back(v);
		}
		vec.push_back(ve);
	}
	stack<int> S_v, S_c;
	int Mytime = 1;
	int now, cnt;
	bool flag;
	for (i = 1; i <= n; i++) {
		if (d[i] != 0) continue;
		S_v.push(i);
		S_c.push(1);
		while (!S_v.empty()) {
			now = S_v.top();
			cnt = S_c.top();
			S_c.pop();
			flag = false;
			if (d[now] == 0) {
				d[now] = Mytime;
				Mytime++;
			}
			while(cnt <= vec[now][0]) {
				if (d[vec[now][cnt]] == 0) {
					flag = true;
					break;
				}
				cnt++;
			}
			if (flag) {
				S_v.push(vec[now][cnt]);
				S_c.push(cnt + 1);
				S_c.push(1);
				continue;
			}
			f[now] = Mytime;
			Mytime++;
			S_v.pop();
		}
	}
	for (i = 1; i <= n; i++) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}
}
