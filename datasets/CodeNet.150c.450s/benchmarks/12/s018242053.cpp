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
#include <cstdlib>
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i < (int)n; i++)
#define Loopr(i, n) for(int i= (int)n - 1; i >= 0; i--)
using namespace std;
typedef long long int ll;

int main() {
	int h;
	cin >> h;
	vector<int> A(h + 1);
	Loop1(i, h + 1) cin >> A[i];
	Loop1(i, h + 1) {
		cout << "node " << i << ": key = " << A[i] << ", ";
		if (i / 2 > 0) cout << "parent key = " << A[i / 2] << ", ";
		if (i * 2 <= h) cout << "left key = " << A[i * 2] << ", ";
		if (i * 2 + 1 <= h) cout << "right key = " << A[i * 2 + 1] << ", ";
		cout << endl;
	}
	return 0;
}