#include <iostream>
#include <vector>
#include <string>
using namespace std;
int balls[10];

bool dfs(int n, int left, int right) {
	if(n == 10) return true;
	if(balls[n] > left && dfs(n + 1, balls[n], right)) return true;
	if(balls[n] > right && dfs(n + 1, left, balls[n])) return true;
	return false;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 10; j++) {
			cin >> balls[j];
		}
		cout << (dfs(0, 0, 0) ? "YES" : "NO") << endl;
	}
}