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

int iINF = 2147483647;
ll lINF = 9223372036854775807;

template <class T> inline void dbg(T t) { cout << t << endl; }

string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int len[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	int x, y;
	
	while (cin >> x >> y) {
		if (x==0 && y==0) break;
		
		int ans = 3;
		for_(i, 0, x) {
			int l = len[i];
			
			if (i==x-1) {
				l = y-1;
			}
			
			for_(j, 0, l) {
				ans++; ans %= 7;
			}
		}
		cout << day[ans] << endl;
	}
	
	return 0;
}