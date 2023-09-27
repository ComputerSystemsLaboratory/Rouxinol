#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int N;
	cin >> N;
	int i, j, k;
	vector <int> V;
	for (i = 0; i < N; i++) {
		int v;
		cin >> v;
		V.push_back(v);
		cout << V.at(i);
		if (i != N - 1) {
			cout << " ";
		}
	}
	cout << endl;
	for (i = 1; i < N; i++) {
		int j = i;
		while (V.at(j-1) > V.at(j)&&j>0) {
			swap(V.at(j-1), V.at(j));
			j--;
			if (j < 1) {
				break;
			}
		}
		for (k = 0; k < N; k++) {
			cout << V.at(k);
			if (k != N - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}
	
}
