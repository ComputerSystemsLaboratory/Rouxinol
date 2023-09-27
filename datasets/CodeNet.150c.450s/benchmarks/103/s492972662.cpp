#include<iostream>
using namespace std;

int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
int n, s, r;

void dfs(int i, int sum, int n) {
	if (n == 0 && sum == s) {
		r++;
		return;
	}
	if (i == 10 || !n)return;
	dfs(i + 1, sum + a[i], n - 1);
	dfs(i + 1, sum, n);
	return;
}

int main() {
	while (cin >> n >> s) {
		if (n == 0 && s == 0)break;
		r = 0;
		dfs(0, 0, n);
		cout << r << endl;
	}
	return 0;

}