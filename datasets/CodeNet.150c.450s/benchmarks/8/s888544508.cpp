#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string.h>
#include <deque>
#define REP(i,j,n) for(int i=j;i<n;i++)
#define SORT(x) sort(x.begin(),x.end())

using namespace std;

int main() {
	string s, t;
	int n, tarou = 0, hanako = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		int count = 0;
		bool judge = true;
		while (count < s.length() || count < t.length()) {
			if (s[count] > t[count]) {
				tarou += 3;
				judge = false;
				break;
			}
			else if (s[count] < t[count]) {
				hanako += 3;
				judge = false;
				break;
			}
			else {
				count++;
			}
		}
		if (judge) {
			tarou++; hanako++;
		}
	}
	cout << tarou << " " << hanako << endl;
	return 0;
}