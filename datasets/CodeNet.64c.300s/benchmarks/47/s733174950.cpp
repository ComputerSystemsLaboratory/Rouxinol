#include <algorithm>
#include <bitset>
#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define FOR(x,a,b) for(int x=a;x<b;x++)
#define REP(x,b) for(int x=0;x<b;x++)
#define FORSIZE(x,A) for(int x=0;x<A.size();x++)
#define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
#define SORT(x) sort(x.begin(),x.end())
#define RSORT(x) sort(x.rbegin(),x.rend())
#define rsort(x,n) sort(x, x+n, greater<int>())
#define REV(x) reverse(x.begin(),x.end())
using namespace std;
typedef long long ll;
inline int toInt(std::string s) {int v; std::istringstream sin(s);sin>>v;return v;}
template<class T> inline std::string toString(T x) {std::ostringstream sout;sout<<x;return sout.str();}

int main( int argc, const char* argv[] )
{
    int a[101];
    int tmp;
    int c = 0;
    int m = 0;
    fill(a, a+101, 0);
    while (cin >> tmp) {
        a[tmp] += 1;
        c += 1;
    }
    FOR(i, 0, 101) {
        m = max(m, a[i]);
    }
    FOR(i, 0, 101) {
        if (a[i] == m) {
            cout << i << endl;
        }
    }
    return 0;
}