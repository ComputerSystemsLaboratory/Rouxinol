#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <cctype>
#include <sstream>
#include <set>
#include <map>
#include <queue>
#include <complex>
using namespace std;
#define REP(i,n) for(int i = 0; i < (int)n; i++)
#define FOR(i,a,b) for(int i = a; i < (int)b; i++)
const int INF = 1<<28;

int main() {
	int n;
	while(cin >> n, n) {
		pair<bool, bool> leg;
		leg.first = leg.second = false;
		bool chk = false;
		int cnt = 0;
		REP(i, n) {
			string input;
			cin >> input;
			if(input == "lu")
				leg.first = true;
			else if(input == "ld")
				leg.first = false;
			else if(input == "ru")
				leg.second = true;
			else if(input == "rd")
				leg.second = false;
			if(!chk && leg.first && leg.second) {
				chk = true;
				cnt++;
			}
			else if(chk && !leg.first && !leg.second) {
				chk = false;
				cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}