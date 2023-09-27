#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <complex>
#include <ctime>
#include <cstdlib>

using namespace std;

inline int to_int(string s) {int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string to_str(T x) {ostringstream sout; sout << x; return sout.str();}

typedef long long ll;

int main()
{
	int fib[1256], num;

	fib[0] = 1; fib[1] = 1;

	for(int i = 2; i < 128; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	cin >> num;

	cout << fib[num] << endl;
}