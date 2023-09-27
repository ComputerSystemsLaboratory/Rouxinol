#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

#define all(c) (c).begin(), (c).end()
#define pb push_back
#define mp make_pair
#define EXIST(v,i) (find(all(v), i) != (v).end())
#define ERASE(v,i) (v).erase(remove(all(v), i), (v).end())
#define INDEX(v,i) (find(all(v), i) - (v).begin())
#define rep(i,n) for(int i = 0; i < (int)n; ++i)
#define debug(x) cerr << #x << " = " << (x) << endl;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

const int INF = 100000000;
const double PI = 3.14159265358979323846;
const double EPS = 1e-10;

int main() {
	for(vector<int> a(4), b(4); cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3];) {
		int hit = 0, blow = 0;
		rep(i,4) {
			if(a[i] == b[i])
				hit++;
			else {
				if(EXIST(a, b[i])) {
					blow++;
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}