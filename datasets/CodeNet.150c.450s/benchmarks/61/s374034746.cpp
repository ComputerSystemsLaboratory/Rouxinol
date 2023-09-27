#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <stack>
#include <queue>
#include <cmath>

#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define vc vector;

const int INF = 100000000;

using namespace std;

void p(int x) {
	cout << x << endl;
}

void pp(string s) {
	cout << s << endl;
}

int main() {
	while (1) {
		int count = 0,arrcnt=0;
		bool alljudge = true;
		int n, a, b, c, x,xx;
		cin >> n >> a >> b >> c >> x;
		if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0)break;
		
		vector<pair<int,bool>> v(n);
		rep(i, 0, n) {
			cin >> v[i].first;
			v[i].second = false;
		}
		rep(i, 0, 10001) {
			if (x == v[arrcnt].first && v[arrcnt].second == false) {
				v[arrcnt].second = true;
				arrcnt++;
			}
			
			if (arrcnt == n) {
				cout << count << endl;
				alljudge = false;
				break;
			}

			x = (a*x + b) % c;
			count++;
		}

		if(alljudge) cout << -1 << endl;



	}

	return 0;
}