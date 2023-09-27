#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <utility>
#include <fstream>
//#include <random>
#include <map>
//#include <unordered_map>
#include <cstdlib>
#include <functional>
#include <time.h>
//#include <chrono>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <iostream>
#include <limits>
#include <numeric>
//#include <type_traits>
#define rep(i,n) for(int i=0;i<n;i++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define INF 1000000001
#define MOD 1000000007
#define SORT(s) sort(s.begin(), s.end());
#define REVERSE(s) reverse(s.begin(), s.end());
#define SUM(s) accumulate(s.begin(), s.end(), 0LL);
#define P pair<int,int>
#define mp make_pair
#define valid(x,y,h,w) (0<=x&&x<h&&0<=y&&y<w)
//#define int ll
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
int ndx[8] = { 0,1,0,-1, 1,1,-1,-1 };
int ndy[8] = { 1,0,-1,0, 1,-1,-1,1 };
double pi = 3.141592653589793;
using namespace std;
int POW(int x, int y) { return int(pow(double(x), double(y))); }
double log(double a, double b) { return log(b) / log(a); }

//void solve1();
int score1();

int ti;
int D;
int sumC;
//int no = 26;
vector<int> c(26), t;
vector<vector<int>> s;

int main() {
	srand((unsigned)time(NULL));
	cin >> D;
	s.resize(D);

	rep(i, 26) {
		cin >> c[i];
		sumC += c[i];
	}
	rep(i, D) {
		s[i].resize(26);
		rep(j, 26) {
			cin >> s[i][j];
		}
	}
	t.resize(D);
	rep(i, D) {
		cin >> t[i];
		t[i]--;
	}
	score1();
	//cout << score1() << endl;

}

void solve1() {

	ti = clock();

	while (1) {
		double time = (double)(clock() - ti) / CLOCKS_PER_SEC;
		if (time > 9.9) {
			break;
		}

		
	}
}

int score1() {
	//最後にコンテストが行われた日
	vector<int> last(26, -1);
	int ans = 0;

	rep(i, D) {
		ans += s[i][t[i]];
		last[t[i]] = i;
		rep(j, 26) {
			ans -= c[j] * (i - last[j]);
		}
		cout << ans << endl;
	}
	return ans;
}
