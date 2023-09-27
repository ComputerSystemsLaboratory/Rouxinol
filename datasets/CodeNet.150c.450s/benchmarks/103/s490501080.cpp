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

int num, sum;
//now: 現在の数 cnt: 今なん回目？ add:何回足した？
int judge(int now, int cnt, int add)
{
	if(add == num)
	{
		if(now == sum)
			return 1;
		else
			return 0;
	}
	else if(cnt > 9)
	{
		return 0;
	}
	else
	{
		return judge(now + cnt, cnt+1, add+1) + judge(now, cnt+1, add);
	}
}

int main()
{
	while(cin >> num >> sum)
	{
		if(num == 0 && sum == 0)
			break;
		cout << judge(0, 0, 0) << endl;
	}
}