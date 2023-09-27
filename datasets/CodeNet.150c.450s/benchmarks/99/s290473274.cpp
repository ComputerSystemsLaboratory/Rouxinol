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

int toi(string in) {
	int ans = 0;
	REP(i, in.size()) {
		int num = 0;
		if(i != 0)
			num = (int)in[i-1] - '0'; 
		if(in[i] == 'm') {
			if(0 < num && num < 10)  
				ans += num * 1000;
			else
				ans += 1000;
		}
		else if(in[i] == 'c') {
			if(0 < num && num < 10)  
				ans += num * 100;
			else
				ans += 100;
		}
		else if(in[i] == 'x') {
			if(0 < num && num < 10)  
				ans += num * 10;
			else
				ans += 10;
		}
		else if(in[i] == 'i') {
			if(0 < num && num < 10)  
				ans += num;
			else
				ans += 1;
		}
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	REP(i, n) {
		string in1, in2;
		cin >> in1 >> in2;
		int ans = toi(in1) + toi(in2);
		if(ans / 1000) {
			if(ans / 1000 > 1)
				cout << ans / 1000;
			cout << 'm';
		}
		if(ans % 1000 / 100) {
			if(ans % 1000 / 100 > 1)
				cout << ans % 1000 / 100;
			cout << 'c';
		}
		if(ans % 100 / 10) {
			if(ans % 100 / 10 > 1)
				cout << ans % 100 / 10;
			cout << 'x';
		}
		if(ans % 10) {
			if(ans % 10 > 1)
				cout << ans % 10;
			cout  << 'i';
		}
		cout << endl;
	}
	return 0;
}