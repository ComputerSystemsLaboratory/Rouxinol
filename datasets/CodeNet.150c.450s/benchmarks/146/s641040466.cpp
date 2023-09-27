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


struct Point2D { 
	double x, y;
	Point2D (double a=0, double b=0) { x=a; y=b; }
};

typedef Point2D Vector2D;

double dist2D(const Point2D& a, const Point2D& b) { return sqrt( (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) ); }

Vector2D sub_vector2D(const Vector2D& a, const Vector2D& b) {
	Vector2D ret;
	ret.x = a.x - b.x; ret.y = a.y - b.y;
	return ret;
}

double cross_product(const Vector2D& a, const Vector2D& b) { return a.x*b.y - a.y*b.x; }

double inner_product(const Vector2D& a, const Vector2D& b) { return a.x*b.x + a.y*b.y; }

int main() {
	int n; cin >> n;
	Point2D a, b, c, d;
	Vector2D x, y;
	
	while (n--) {		
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
		
		x = sub_vector2D(b, a); y = sub_vector2D(d, c);
		
		if (fabs(cross_product(x, y)) < 1e-10) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}