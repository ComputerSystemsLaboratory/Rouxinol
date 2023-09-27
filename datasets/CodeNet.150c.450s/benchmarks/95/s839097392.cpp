#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	for (int n; cin >> n && n;) {
		int c = 0, d = 0, C = 0;
		while (n--) {
			string f;
			cin >> f;
			if (f == "lu")c += 1;
			else if (f == "ru")c += 2;
			else if (f == "ld")c -= 1;
			else if (f == "rd")c -= 2;

			if ((c == 3 || c == 0) && C != c) {
				d++;
				C = c;
			}
		}
		cout << d << endl;
	}
	return 0;
}