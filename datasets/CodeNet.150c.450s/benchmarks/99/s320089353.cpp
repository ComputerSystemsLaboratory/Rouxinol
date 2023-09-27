#include<iostream>
#include<string>
#include<map>
using namespace std;
int f(char c){
	if (c == '2')return 2;
	if (c == '3')return 3;
	if (c == '4')return 4;
	if (c == '5')return 5;
	if (c == '6')return 6;
	if (c == '7')return 7;
	if (c == '8')return 8;
	if (c == '9')return 9;
	return 1;
}
void solve() {
	int ans[] = { 0,0,0,0 };
	string a, b; cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 'm') {
			if (i == 0)ans[0]++;
			else ans[0] += f(a[i - 1]);
		}
		else if (a[i] == 'c') {
			if (i == 0)ans[1]++;
			else ans[1] += f(a[i - 1]);
		}
		else if (a[i] == 'x') {
			if (i == 0)ans[2]++;
			else ans[2] += f(a[i - 1]);
		}
		else if (a[i] == 'i') {
			if (i == 0)ans[3]++;
			else ans[3] += f(a[i - 1]);
		}
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] == 'm') {
			if (i == 0)ans[0]++;
			else ans[0] += f(b[i - 1]);
		}
		else if (b[i] == 'c') {
			if (i == 0)ans[1]++;
			else ans[1] += f(b[i - 1]);
		}
		else if (b[i] == 'x') {
			if (i == 0)ans[2]++;
			else ans[2] += f(b[i - 1]);
		}
		else if (b[i] == 'i') {
			if (i == 0)ans[3]++;
			else ans[3] += f(b[i - 1]);
		}
	}
	if (ans[3] >= 10) { ans[3] %= 10; ans[2]++; }
	if (ans[2] >= 10) { ans[2] %= 10; ans[1]++; }
	if (ans[1] >= 10) { ans[1] %= 10; ans[0]++; }
	if (ans[0] != 0) {
		if (ans[0] != 1)cout << ans[0];
		cout << 'm';
	}
	if (ans[1] != 0) {
		if (ans[1] != 1)cout << ans[1];
		cout << 'c';
	}
	if (ans[2] != 0) {
		if (ans[2] != 1)cout << ans[2];
		cout << 'x';
	}
	if (ans[3] != 0) {
		if (ans[3] != 1)cout << ans[3];
		cout << 'i';
	}
	cout << endl;
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++)solve();
}