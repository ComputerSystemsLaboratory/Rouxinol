#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void to_vec(string s, vector<int>& vec) {
	int num = 1;
	for (auto itr = s.begin(); itr != s.end(); itr++) {
		if (*itr == 'm') {
			vec[0] = num;
			num = 1;
		} else if (*itr == 'c') {
			vec[1] = num;
			num = 1;
		} else if (*itr == 'x') {
			vec[2] = num;
			num = 1;
		} else if (*itr == 'i') {
			vec[3] = num;
			num = 1;
		} else {
			num = (*itr) - '0';
		}
	}
}

vector<int> sum(vector<int>& left,vector<int>& right) {
	vector<int> res(4, 0);
	bool over = false;
	int num;
	for (int i = 3; i >= 0; i--) {
		num = left[i] + right[i];
		if (over) {
			num++;
		}
		if (num > 9) {
			over = true;
			num -= 10;
			res[i] = num;
		} else {
			over = false;
			res[i] = num;
		}
	}
	return res;
}

int main(void) {
	int n;
	cin  >> n;

	for (int i = 0; i< n; i++) {
		string left, right;
		cin >> left >> right;
		//cout << left << endl;
		//cout << right << endl;
		vector<int> lvec(4, 0);
		vector<int> rvec(4, 0);
		to_vec(left, lvec);
		to_vec(right, rvec);

		vector<int> res = sum(lvec, rvec);
		int num;
		for (int i = 0; i < 4; i++) {
			num = res[i];
			if (num == 0) {
				continue;
			} else {
				if (num != 1) {
					cout << num;
				}
				if (i == 0) {
					cout << "m";
				} else if (i == 1) {
					cout << "c";
				} else if (i == 2) {
					cout << "x";
				} else {
					cout << "i";
				}
			}
		}
		cout << endl;
	}
	return 0;
}