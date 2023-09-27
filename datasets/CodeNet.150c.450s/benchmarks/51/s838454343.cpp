#define _USE_MATH_DEFINES
#include <iostream>
#include <memory>
#include <memory.h>
#include <fstream>
#include <cmath>
#include <math.h>
#include <numeric>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <sstream>
#include <cstdlib>
#include <cassert>
#include <cstdio>
#include <map>
#include <iomanip>
#include <list>
#include <cctype>
#include <algorithm>
#include <complex>

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, m, n) for(int i = m; i < n; i++)
using namespace std;

typedef complex<double> xy_t;
typedef pair<xy_t, xy_t> line;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<double, double> Pd;
typedef pair<int, P> PP;
typedef pair<int, PP> PPP;
const int INF = 1 << 29;
const double EPS = 1E-10;

#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
	bool ok[30];
	memset(ok, false, sizeof(ok));
	int num;

	rep(i, 28){
		cin >> num;
		ok[--num] = true;
	}
	rep(i, 30){
		if(!ok[i]) {
			cout << i + 1 << endl;
		}
	}

	return 0;
}