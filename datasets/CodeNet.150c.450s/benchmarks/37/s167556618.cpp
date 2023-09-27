#define _CRT_SECURE_NO_WARNINGS
#include <queue>
#include <set>
#include <map>
#include <list>
#include <stack>
#include <cmath>
#include <functional>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iterator>
#include <algorithm>
#include <iostream>

#define aLL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXISt(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define MAX 100000000
#define PI 3.14159265258979
#define pb push_back
#define mp make_pair
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef long long ll;
int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };

int sttoi(std::string str) {
	int ret;
	std::stringstream ss; ss << str;
	ss >> ret;
	return ret;
}

int gcd(int a, int b){
	if (b > a)swap(a, b);
	if (b == 0)return a;
	return gcd(b, a%b);
}

void solve() {
	int a, b, c, d, e, f;
	double x, y;
	while (scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != -1){
	y = (double)(d*c - a*f) / (double)(b*d - a*e);
	x = (double)(c - b*y) / (double)a;
	x *= 1000;
	y *= 1000;
	x = round(x);
	y = round(y);
	x /= 1000;
	y /= 1000;
	cout << setprecision(3) << fixed << x << " " << y << endl;
	}
}

int main() {
	solve();
	return 0;
}