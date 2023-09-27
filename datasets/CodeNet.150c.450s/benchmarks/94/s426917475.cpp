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

void BubbleSort(vector<int> &vec,int &count) {
	bool flag = true;
	int n = vec.size();
	while (flag) {
		flag = false;
		for (int i = n - 1; i >0; --i) {
			if (vec[i - 1] > vec[i]) {
				swap(vec[i - 1], vec[i]);
				++count;
				flag = true;
			}
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
	BubbleSort(vec, count);
	print(vec);
	cout << count << endl;

	return 0;
}
