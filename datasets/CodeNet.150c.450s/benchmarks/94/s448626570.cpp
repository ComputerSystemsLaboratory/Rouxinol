#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void inputVector(int n, vector<int>& va) {
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		va.push_back(a);
	}
}

int bubbleSort(int n, vector<int>& va) {
	int countSort = 0;
	bool existRev = true;
	while (existRev) {
		existRev = false;
		for (int i = n - 1; i > 0; i--) {
			if (va.at(i - 1) > va.at(i)) {
				int x = va.at(i);
				va.at(i) = va.at(i - 1);
				va.at(i - 1) = x;
				countSort++;
				existRev = true;
			}
		}
	}
	return countSort;
}

void outputVector(int n, vector<int>& va, int countSort) {
	for_each(va.cbegin(), va.cend() - 1, [](int x) {
		cout << x << " ";
	});
	cout << va.at(n - 1) << "\n";
	cout << countSort << "\n";
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<int> va;
	inputVector(n, va);

	int countSort = bubbleSort(n, va);

	outputVector(n, va, countSort);
	return 0;
}
