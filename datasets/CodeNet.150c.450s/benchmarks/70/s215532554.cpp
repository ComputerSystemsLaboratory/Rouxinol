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
	int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string week[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
	for(int month, day; cin >> month >> day && month && day;) {
		int sum = 0;
		rep(i,month - 1) {
			sum += days[i];
		}
		sum += day;
		sum %= 7;
		cout << week[sum] << endl;
	}
	return 0;
}