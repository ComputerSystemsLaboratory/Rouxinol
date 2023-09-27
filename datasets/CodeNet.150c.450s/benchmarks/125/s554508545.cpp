#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
stack<int> st;
int  v[102][101], n;
int  tim[102][2];
int ct = 1;
int go[102];
inline void search(int t) {
	if(!tim[t][0]) tim[t][0] = ct++;
	go[t] = 1;
	int tf = 0;
	for (int a = 1; a <= n; a++) {
		if (v[t][a]) {
			st.push(a);
			for (int i = 1; i <= n; i++) {
				v[i][a] = 0;
			}
			search(st.top());
			tf = 1;
		}
	}
		
	if(!tf) {
		st.pop();
		tim[t][1] = ct++;
		if(!st.empty()) search(st.top());
	}
}
int main() {

	st.push(1);
	int u, k, s;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			v[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> u;
		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> s;
			v[u][s] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		v[i][1] = 0;
	}
	search(1);
	for (int i = 2; i <= n; i++) {
		if (!go[i]) {
			st.push(i);
			for (int j = 1; j <= n; j++) {
				v[j][i] = 0;
			}
			search(i);
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << i << " " << tim[i][0] << " " << tim[i][1] << endl;
	}
	return 0;
}