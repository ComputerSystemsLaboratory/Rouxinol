#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }


vector<string> split(string str, string delim)
{
    vector<string> result;
    int cutAt;
    while( (cutAt = str.find_first_of(delim)) != str.npos )
    {
        if(cutAt > 0)
        {
            result.push_back(str.substr(0, cutAt));
        }
        str = str.substr(cutAt + 1);
    }
    if(str.length() > 0)
    {
        result.push_back(str);
    }
	return result;
}


int main()
{
	string str;
	getline(cin, str);

	vector<string> ss = split(str, " ");

	sort(ALL(ss));

	int res = 1, buf = 1;
	string sres = ss[ss.size()-1];

	rep(i, ss.size()-1)
	{
		if(ss[i] == ss[i+1])
		{
			buf++;
		}
		else
		{
			if(res < buf)
			{
				res = buf;
				sres = ss[i];
			}
			buf = 1;
		}

		if(i == ss.size() - 2 && res < buf)
			sres = ss[i];

	}
	cout << sres << " ";

	res = 0;
	rep(i, ss.size())
	{
		if(res < ss[i].size())
		{
			sres = ss[i];
			res = ss[i].size();
		}
	}
	cout << sres << endl;
}