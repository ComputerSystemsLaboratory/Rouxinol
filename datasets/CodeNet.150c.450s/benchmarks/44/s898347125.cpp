#include <iostream>
#include <iomanip>
#include <cassert>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <sstream>
#include <istream>
#include <cmath>
#include <cstdio>

using namespace std;

#define vci vector<int>
#define vcs vector<string>
#define pb push_back
#define sz size()
#define mapci map<char, int>
#define mapsi map<string, int>
#define all(x) x.begin(), x.end()

#define for_(i, a, b) for (int i=(int)a; i<(int)b; i++)
#define for_d(i, a, b) for (int i=(int)a-1; i>=b; i--)
#define for_r(i, a, b, c) for (int i=(int)a; i<(int)b; i += c)
#define for_dr(i, a, b, c) for (int i=(int)a-1; i>=b; i -= c)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

#define vcitr vector<int>::iterator
#define vcsitr vector<string>::iterator
#define mapcitr map<char, int>::iterator
#define mapsitr map<string, int>::iterator

typedef long long ll;

const int iINF = 2147483647;
const ll lINF = 9223372036854775807;

template <class T> inline void dbg(T t) { cout << t << endl; }

int main() {
	vci a(4), b(4);
	bool use[10] = { 0 };
	
	while (cin>>a[0]) {
		for_(i, 1, 4) cin>>a[i];
		for_(i, 0, 4) cin>>b[i];
		memset(use, 0, sizeof(use));
		for_(i, 0, 4) use[ a[i] ] = 1;
		
		int hit = 0, blow = 0;
		for_(i, 0, 4) {
			if (a[i] == b[i]) hit++;
			else if (use[ b[i] ]) blow++;
		}
		cout << hit << " " << blow << endl;
	}
	
	return 0;
}