#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
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

using namespace std;
typedef long long int lint;


//***** Main Program *****

int main() {
	int n, q;
	cin >> n >> q;
	queue<pair<string, int>> qp;
	Loop(i, n) {
		string a;
		int b;
		cin >> a >> b;
		qp.push({ a,b });
	}
	int time = 0;
	while (qp.size() > 0) {
		pair<string, int> f = qp.front();
		if (f.second <= q) {
			time += f.second;
			qp.pop();
			cout << f.first << " " << time << endl;
		}
		else {
			time += q;
			qp.pop();
			qp.push({ f.first, f.second - q });
		}
	}
	return 0;
}