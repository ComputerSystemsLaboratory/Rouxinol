#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>

using namespace std;

int main(int argc, char **argv){
	int n;
	vector<int> v;
	int begin[] = { 1, 2, 4 };
	while (cin >> n && n > 0){
		v.clear();
		int count = 0;
		if (n <= 3) {
			count = begin[n - 1];
		} else {
			for (int i = 0; i < 3; i++) {
				v.push_back(begin[i]);
			}

			for (int i = 3; i < n; i++) {
				v.push_back(v[i - 3] + v[i - 2] + v[i - 1]);
			}
			count = v.back();
		}
		
		if (count % 3560 == 0) {
			cout << count / 3650 << endl;
		} else {
			cout << count / 3650 + 1 << endl;
		}
	}
	return 0;
}