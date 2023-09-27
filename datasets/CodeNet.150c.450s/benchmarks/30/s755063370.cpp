#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> vec) {
	cout << vec[0];
	for(int i = 1; i < vec.size(); ++i) {
		cout << " " << vec[i];
	}
	cout << endl;
}

void SelectionSort(vector<int>& vec, int& count) {
	int n = vec.size();
	for (int i = 0; i < n; ++i) {
		int min = i;
		for (int j = i + 1; j < n; ++j) {
			if (vec[j] < vec[min])
				min = j;
		}
		if (i != min) {
			++count;
			swap(vec[i], vec[min]);
		}
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	int count = 0;
	SelectionSort(vec, count);
	print(vec);
	cout << count << endl;

	return 0;
}
