#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <cstring>

using namespace std;


const int INF = (1<<30);
const int MAX_n = 100000;

//最長増加部分列の長さの計算
int LIS(vector<int> V) {
	int DP[MAX_n] = { 0 };
	fill(DP, DP + V.size(), INF);
	for (int i = 0; i < V.size();++i) {
		*lower_bound(DP, DP + V.size(), V[i]) = V[i];
	}
	return lower_bound(DP, DP + V.size(), INF) - DP;
}

int main() 
{
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; ++i) cin >> A[i];
	cout << LIS(A) << endl;
	return 0;
}

