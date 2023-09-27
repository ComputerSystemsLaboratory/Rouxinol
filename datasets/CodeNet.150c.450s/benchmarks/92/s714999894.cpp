#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

#define REP(i,f,n) for(int i=(f); i < (n); ++i)
#define PER(i,f,n) for(int i=(n-1); i >= f; --i)

//----------------------------------
//----------------------------------
//
int digit(int n)
{
	int count = 0;
	while(n > 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

signed main()
{
    ios::sync_with_stdio(false);
	int a, b;
	while(cin >> a)
	{
		cin >> b;
		cout << digit(a+b) << endl;
	}

}