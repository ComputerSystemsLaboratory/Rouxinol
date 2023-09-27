#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#define REP(i, n) for(int i = 0;i < n;i++)
#define ll long long
#define INF 114514
using namespace std;



int main(){
	while (1) {
		int i, j, count = -1, k;
		cin >> i >> j;
		if (i == 0 && j == 0) return 0;
		for (k = 1; k <= i - 1; k++) {
			if (k == 4 || k == 6 || k == 9 || k == 11) count += 30;
			else if (k == 2) count += 29;
			else count += 31;
		}
		count += j;
		count = count % 7;
		switch (count) {
		case 0:
			cout << "Thursday" << endl;
			break;
		case 1:
			cout << "Friday" << endl;
			break;
		case 2:
			cout << "Saturday" << endl;
			break;
		case 3:
			cout << "Sunday" << endl;
			break;
		case 4:
			cout << "Monday" << endl;
			break;
		case 5:
			cout << "Tuesday" << endl;
			break;
		case 6:
			cout << "Wednesday" << endl;
			break;
		}
	}
	return 0;
}