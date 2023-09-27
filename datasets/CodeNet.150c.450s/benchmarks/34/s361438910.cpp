#include <iostream>
using namespace std;

int n = 0;

int dfs(int step) {
	if (step == n) return 1;
	if (step > n) return 0;
	return dfs(step+1) + dfs(step+2) + dfs(step+3);
}

int GetYears(int c) {
	int days = c / 10;
	if (c % 10 != 0) days++;
	int years = days / 365;
	if (days % 365 != 0) years++;
	return years;
}

int main() {
	for(;;) {
		cin >> n;
		if (n == 0) break;
		cout << GetYears(dfs(0)) << endl;
	}
	return 0;
}