#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
//#include "toollib.h"
//#include "puzzle.h"
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#pragma warning (disable:4018)
#pragma warning (disable:4244)
#pragma warning (disable:4996)

using namespace std;
typedef long long int lint;


//***** Main Program *****

int main() {
	deque<int> dq;
	const int base = -50000;
	dq.push_back(base);
	string s;
	cin >> s;
	int maxh = base;
	Loop(i, s.length()) {
		if (s[i] == '/') {
			const int x = dq.back() + 1;
			if (x > maxh) {
				dq.push_back(x);
				maxh = x;
			}
			else {
				int j = dq.size() - 1;
				int area = 0;
				while (dq[j] < x || dq[j]>0) {
					if (dq[j] < x) area++;
					else {
						area += dq[j];
						dq.erase(dq.begin() + j);
					}
					j--;
				}
				dq.push_back(area);
				dq.push_back(x);
			}
		}
		else if (s[i] == '\\') {
			dq.push_back(dq.back() - 1);
		}
		else {
			dq.push_back(dq.back());
		}
	}
	vector<int> ret;
	Loop(i, dq.size()) {
		if (dq[i] > 0) ret.push_back(dq[i]);
	}
	cout << accumulate(ret.begin(), ret.end(), 0) << endl;
	cout << ret.size();
	Loop(i, ret.size()) cout << " " << ret[i];
	cout << endl;
	return 0;
}