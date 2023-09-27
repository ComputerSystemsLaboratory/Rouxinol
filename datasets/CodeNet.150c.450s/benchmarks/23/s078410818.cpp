#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
#include <functional>
#include <cctype>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)n; ++i)

int memo[45];

long fib(int n)
{
	if(n <= 1)
		return 1;
	if(memo[n] != 0) return memo[n];
	return memo[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
	cin >> n;

	cout << fib(n) << endl;
	return 0;

}