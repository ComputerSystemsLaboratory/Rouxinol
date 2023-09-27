#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <functional>
#include <assert.h>
#include <sstream>

using namespace std;

#define rep(i,n) for(int i = 0;i < n;i++)
#define all(a) a.begin(),a.end()

int toInt(string s) {
	stringstream ss;
	ss << s;
	int num;
	ss >> num;
	return num;
}
string toStr(int num) {
	stringstream ss;
	ss << num;
	return ss.str();
}

int main() {

	string a; int size;
	while (cin >> a >> size ) {
		if (a == "0" && size == 0)break;
		vector<string> table;
		
		for (int i = 0; i <= 20; i++) {
			while (a.size() < size) {
				a = "0" + a;
			}
			table.push_back(a);
			sort(all(a));
			int da = toInt(a);
			reverse(all(a));
			int ua = toInt(a);

			int next_a = ua - da;
			a = toStr(next_a);
		}
		[&]() {
			for (int i = 0; i <= 20; i++) {
				for (int j = 0; j < i; j++) {
					if (table[j] == table[i]) {
						cout << j << " " << toInt(table[j]) << " " << i - j << endl;
						return;
					}
				}
			}
		}();

	}

	return 0;
}