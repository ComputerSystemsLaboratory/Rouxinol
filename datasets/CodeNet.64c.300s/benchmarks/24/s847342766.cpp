#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <fstream>
//#include <tuple>
#include <set>
#include <string.h>
#include <functional>

#define X first
#define Y second
#define MP make_pair
//#define MT make_tuple
#define REP(i, a, n) for(int (i) = (a); (i) < (n); ++(i))
#define FOR(i, n) REP(i, 0, n)
typedef long long ll;
using namespace std;
const int MAX = 101;

template<class T, class U>
void convert(T &t, U &u)
{
	stringstream ss;
	ss << t;
	ss >> u;
}

int main()
{
	int n;
	while (cin >> n && n){
		int a = 0, b = 0;
		FOR(i, n){
			int s, t; cin >> s >> t;
			if (s > t) a += s + t;
			else if (s < t) b += s + t;
			else a += s, b += t;
		}

		cout << a << " " << b << endl;
 	}

	return 0;
}