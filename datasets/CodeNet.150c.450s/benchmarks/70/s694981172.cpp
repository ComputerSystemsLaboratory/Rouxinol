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

typedef pair<int, int> P;
typedef long long ll;

const int INF = 1 << 30;
const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};
const int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leap(int y)
{
	return ((y%4==0&&y%100!=0)||y%400==0);
}

#define debug(a, b, c) for(int i = 0; i < b; i++){for(int j = 0; j < c; j++){printf("%3d", a[i][j]);}puts("");}puts("-----------------------------------------");

int main()
{
	int month, day, res;
	string week[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	while(cin >> month >> day)
	{
		int year = 2004;
		if(!month && !day) break;
		if(month == 1 || month == 2)
		{
			year--;
			month += 12;
		}
		res = (5*year/4 - year/100 + year/400 + (26*month + 16)/10 + day) % 7;
		cout << week[res] << endl;
	}
}