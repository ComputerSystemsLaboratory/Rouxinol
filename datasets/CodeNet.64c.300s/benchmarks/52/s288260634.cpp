#include<iostream>
using namespace std;
int n, s;
int cou;
void dfs(int i, int sum,int num_of_add) {
	if (sum == s&&num_of_add==n) {
		cou++;
		return;
	}
	if (n == num_of_add||i==10)return;
	dfs(i + 1, sum, num_of_add);
	dfs(i + 1, sum + i, num_of_add + 1);
}
int main() {
	while (cin >> n >> s,n != 0 || s != 0) {
		cou = 0;
		dfs(0, 0, 0);
		cout << cou << endl;
	}
}