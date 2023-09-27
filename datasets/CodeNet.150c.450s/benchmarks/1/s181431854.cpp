#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
//#include "MyMath.h"
//#include "DataStructure.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
#include <stdio.h>
using namespace std;
typedef pair<int, int> p;
const int INF = 1000000000;
int dp[101][10001];
int main(){
	int n; cin >> n;
	vector<int> c;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		c.push_back(x);
	}
	vector <int> line; line.push_back(c[0]);
	int len = 1;
	vector<int>::iterator it1 = c.begin() + 1;
	while (it1 != c.end()) {
		if (*(line.end() - 1) < *it1) { line.push_back(*it1); /*cout << "it1 " << *it1 << endl;*/ len++; }
		/*else if (*(line.end() - 1) > *it1) {
			cout << "it1 " << *it1 << endl;
			vector <int>::iterator it = lower_bound(line.begin(), line.end(), *it1);
			cout << "it  " << *it << endl;
			cout << line.size() << endl;
			line.insert(it, *it1);
			vector <int>::iterator it2 = upper_bound(line.begin(), line.end(), *it1);
			line.erase(it2);
		}*/
		else {
			*lower_bound(line.begin(), line.end(), *it1) = *it1;
		}
		it1++;
	}
	cout << len << endl;
	return 0;
}