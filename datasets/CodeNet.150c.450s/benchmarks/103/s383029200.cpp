#include<iostream>
using namespace std;
int n, s;
int f(int k, int sum, int max) {
	if (sum > s)return 0;
	if (k == n) {
		if (sum == s)return 1;
		else return 0;
	}
	if (max >= 9)return 0;
	int cnt = 0;
	for (int i = max + 1; i < 10; i++)
		cnt += f(k + 1, sum + i, i);
	return cnt;
}
int main() {
	while (cin >> n >> s, n) 
		cout << f(0, 0, -1) << endl;
}