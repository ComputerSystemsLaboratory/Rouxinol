#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<queue>
#include<cmath>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<random>
#include<functional>
#include<algorithm>
#include<stack>
#include<cstdio>
#include<bitset>
#include<unordered_map>
#include<climits>
#include<fstream>
using namespace std;
///////////////////library zone!!!!!!!!!!!!!!!!!!!!!!!!!!!!
typedef long long ll;
typedef long double ld;
#define all(a) (a).begin(),(a).end()
#define EPS (1e-5)
const ll Mod = 1000000007;
const ll mod = 998244353;
struct H {
	ll x, y;
	bool operator<(const H &b) const {
		if (x != b.x) return x < b.x;
		return y < b.y;
	}
	bool operator>(const H &b) const {
		if (x != b.x) return x > b.x;
		return y > b.y;
	}
	bool operator==(const H &b) const { return x == b.x&&y == b.y; }
	bool operator!=(const H &b) const { return (*this) != b; }
};
struct P {
	ll pos, cost;
	bool operator<(const P &b) const { return cost < b.cost; }
	bool operator>(const P &b) const { return cost > b.cost; }
};
struct B {
	ll to, cost;
};
struct E {
	ll from, to, cost;
	bool operator<(const E &b) const { return cost < b.cost; }
	bool operator>(const E &b) const { return cost > b.cost; }
};
template<typename T, typename U>
void chmin(T &a, U b) {
	if (a > b) a = b;
}
template<typename T, typename U>
void chmax(T &a, U b) {
	if (a < b) a = b;
}
template<typename T>
T max_0(T a) {
	if (a < 0) return 0;
	return a;
}
template<typename T>
T min_0(T a) {
	if (a > 0) return 0;
	return a;
}
ll read() {
	ll u;
	ll k = scanf("%lld", &u);
	return u;
}
ll gcd(ll i, ll j) {
	if (i > j) swap(i, j);
	if (i == 0) return j;
	return gcd(j%i, i);
}
ll mod_pow(ll x, ll n, ll p) {
	ll res = 1;
	while (n > 0) {
		if (n & 1) res = res * x % p;
		x = x * x % p;
		n >>= 1;
	}
	return res;
}//x^n%p
const ll Inf = 3023372036854775807;
const int inf = 1500000000;
#define int long long
//----------------------------------------------------
class Vec2 {
public:
	ld x, y;
	Vec2() { x = 0, y = 0; }
	Vec2(ld x, ld y) :x(x), y(y) {}
	ld length() {
		return sqrt(x*x + y * y);
	}
	void normal() {
		ld len = this->length();
		if (len == 0) return;
		x /= len, y /= len;
	}
	Vec2 operator+(Vec2 vec) {
		return Vec2(x + vec.x, y + vec.y);
	}
	Vec2 operator-(Vec2 vec) {
		return Vec2(x - vec.x, y - vec.y);
	}
	Vec2 operator*(int cons) {
		return Vec2(x*cons, y*cons);
	}
	ld operator*(Vec2 vec) {
		return x * vec.x + y * vec.y;
	}
	ld operator%(Vec2 vec) {
		return x * vec.y - y * vec.x;
	}
};
ld dot(Vec2 a, Vec2 b) {
	return a.x*b.x + a.y*b.y;
}
ld cross(Vec2 a, Vec2 b) {
	return a.x*b.y - a.y*b.x;
}
ld areaIntegral(Vec2 a, Vec2 b) {
	return abs(a.x*b.y - a.y*b.x) / 2.0;
}
class Vec3 {
public:
	ld x, y, z;
	Vec3() { x = 0, y = 0, z = 0; }
	Vec3(ld x, ld y, ld z) :x(x), y(y), z(z) {}
	ld length() {
		return sqrt(x*x + y * y + z * z);
	}
	void normal() {
		ld len = this->length();
		if (len == 0) return;
		x /= len, y /= len, z /= len;
	}
	Vec3 operator+(Vec3 vec) {
		return Vec3(x + vec.x, y + vec.y, z + vec.z);
	}
	Vec3 operator-(Vec3 vec) {
		return Vec3(x - vec.x, y - vec.y, z - vec.z);
	}
	Vec3 operator*(int cons) {
		return Vec3(x*cons, y*cons, z*cons);
	}
	ld operator*(Vec3 vec) {
		return x * vec.x + y * vec.y + z * vec.z;
	}
};
ld dot(Vec3 a, Vec3 b) {
	return a.x*b.x + a.y*b.y + a.z*b.z;
}
class Line {
public:
	Vec2 from, to;
	Line(Vec2 from, Vec2 to) :from(from), to(to) {}
};
Line getPerpendicularBisector(Line line) {
	int cx = (line.from.x + line.to.x) / 2, cy = (line.from.y + line.to.y) / 2;
	Vec2 p = Vec2(cx + (line.from.y - line.to.y), cy + (line.to.x - line.from.x));
	return Line(Vec2(cx, cy), p);
}
signed main() {
	Vec2 a, b, c, d;
	while (cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y) {
		ld x = areaIntegral(b - a, c - a);
		ld y = areaIntegral(d - a, b - a);
		ld z = areaIntegral(d - a, c - a);
		ld w = areaIntegral(d - b, c - b);
		if (y&&z&&w) {
			if (abs(x - (y + z + w)) < EPS) {
				cout << "YES\n";
				continue;
			}
		}
		cout << "NO\n";
	}
}
