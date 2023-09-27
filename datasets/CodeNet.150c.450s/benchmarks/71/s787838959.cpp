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


#pragma warning(disable:4996)
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;
const double PI = 3.141592653589793238;
const Int INF = 999999999999;
using namespace std;

int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { 1, 0, -1, 0 };

int  dp[10000];

int main()
{
	REP(i, 10){
		REP(j, 10){
			REP(k, 10){
				REP(l, 10){
					dp[i * 1000 + j * 100 + k * 10 + l] = i + j + k + l;
				}
			}
		}
	}
	int n;
	while (cin >> n){
		cout << count_if(dp, dp + 10000, [n](int o){return o == n; }) << endl;
	}

	return 0;
}