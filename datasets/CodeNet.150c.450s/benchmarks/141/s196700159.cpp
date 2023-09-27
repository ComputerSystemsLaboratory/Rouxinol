#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
#include<iterator>
using namespace std;
typedef  long long int lint;
typedef pair<int, int> IP;
typedef pair<lint, lint> LLP;
typedef pair<char, char>CP;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define llower(v,hoge) *lower_bound(v.begin(), v.end(), hoge)
#define lupper(v,hoge) *upper_bound(v.begin(), v.end(), hoge)

bool tri_in(double p0x, double p0y, double p1x, double p1y, double p2x, double p2y, double px, double py) {
	//(p0x, p0y),(p1x, p1y),(p2x, p2y)の三角形
	//(px, py)が判定したい点
	//辺上は入っている
	double Area = 0.5 * (-p1y * p2x + p0y * (-p1x + p2x) + p0x * (p1y - p2y) + p1x * p2y);
	double s = 1 / (2 * Area) * (p0y * p2x - p0x * p2y + (p2y - p0y) * px + (p0x - p2x) * py);
	double t = 1 / (2 * Area) * (p0x * p1y - p0y * p1x + (p0y - p1y) * px + (p1x - p0x) * py);

	if ((0 <= s)&&(s <= 1) && (0 <= t)&&(t <= 1) && (0 <= 1 - s - t)&&(1 - s - t <= 1)) {
		return true; //Inside Triangle
	}
	else {
		return false;
	}
}


int main() {
	
	double p0x, p0y, p1x, p1y, p2x, p2y, px, py;
	while (cin >> p0x >> p0y >> p1x >> p1y >> p2x >> p2y >> px >> py) {
		if (tri_in(p0x, p0y, p1x, p1y, p2x, p2y, px, py)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	
}
