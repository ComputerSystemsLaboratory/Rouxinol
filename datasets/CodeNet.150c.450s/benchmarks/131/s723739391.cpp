#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
using namespace std;

typedef ostringstream oss;
typedef istringstream iss;

int main(void) {
	int length;
	long num;
	while (cin >> num >> length, num || length) {
		cin.ignore();
		vector<string> stk;
		
		while (true) {
			oss stream;
			stream << setw(length) << setfill('0') << num;
			string str1 = stream.str();
			string str2 = str1;
			vector<string>::iterator it = find(stk.begin(), stk.end(), str1);
			if (it != stk.end() && stk.size() != 0) {
				cout << it - stk.begin() << " " << atoi(str1.c_str()) << " "  << stk.end() - it << endl;
				break;
			}
			stk.push_back(str1);

			sort(str1.begin(), str1.end());
			sort(str2.begin(), str2.end(), greater<int>());

			num = atol(str2.c_str()) - atol(str1.c_str());
		}
	}

	return 0;
}