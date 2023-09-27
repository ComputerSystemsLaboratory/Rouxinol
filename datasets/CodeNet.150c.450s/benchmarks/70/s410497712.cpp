#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <array>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <memory.h>
#include <map>
#include <math.h>
#include <utility>
#include <set>

#pragma warning(disable:4996)
using namespace std;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;
const double PI = 3.141592653589793238;
const Int INF = 999999999999;
typedef pair<int, int> P;

int S[3][3] = {
		{ 0, 1, 0 },
		{ 1, 1, 1 },
		{ 0, 1, 0 },
};
int M[3][3] = {
		{ 1, 1, 1 },
		{ 1, 1, 1 },
		{ 1, 1, 1 },
};
int L[5][5] = {
		{ 0, 0, 1, 0, 0 },
		{ 0, 1, 1, 1, 0 },
		{ 1, 1, 1, 1, 1 },
		{ 0, 1, 1, 1, 0 },
		{ 0, 0, 1, 0, 0 },
};

string week[7]{
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
};

int dd[11]{3,1,3,2,3,2,3,3,2,3,2};

int main()
{
	int m, d;
	while (cin >> m >> d, m&&d){
		int start = 3;
		int di(0);
		for (int i = 1; i < m; ++i){
			di += dd[i - 1];
		}
		di += (d - 1) % 7;
		di += start;
		di %= 7;
		cout << week[di] << endl;
	}
	return 0;

}