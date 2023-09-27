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
	map<string, int> m;
	string line;
	getline(cin, line);
	istringstream is(line);
	for(string word; is >> word;) {
		m[word]++;
	}
	int lmax = 0, cmax = 0;
	string wlmax = "", wcmax = "";
	for(map<string, int>::iterator it = m.begin(); it != m.end(); ++it) {
		if(static_cast<int>(it->first.length()) > lmax) {
			lmax = it->first.length();
			wlmax = it->first;
		}
		if(it->second > cmax) {
			cmax = it->second;
			wcmax = it->first;
		}
	}
	cout << wcmax + " " << wlmax << endl;
	return 0;
}