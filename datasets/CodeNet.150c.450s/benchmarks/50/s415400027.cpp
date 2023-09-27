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

int nums[] = {
	500, 100, 50, 10, 5, 1
};

int main(){
	int n;
	while(cin >> n && n){
		n = 1000 - n;
		int cnt = 0;
		rep(i, 6){
			cnt += n / nums[i];
			n %= nums[i];
		}
		cout << cnt << endl;
	}
	return 0;
}