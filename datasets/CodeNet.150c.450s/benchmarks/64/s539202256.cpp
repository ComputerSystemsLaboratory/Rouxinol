#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool solve(int data[], int depth,int maxDepth, int num, int target) {
	
	if (maxDepth < depth)return false;
	int n = num + data[depth];
	if (n == target)return true;
	if (solve(data, depth + 1, maxDepth, num, target)
		|| solve(data, depth + 1, maxDepth, n, target))return true;
	return false;
}

int main() {
	int n;
	int m;
	int data[20];
	int array[200];
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < m; i++) {
		if (solve(data, 0, n - 1, 0, array[i])) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}