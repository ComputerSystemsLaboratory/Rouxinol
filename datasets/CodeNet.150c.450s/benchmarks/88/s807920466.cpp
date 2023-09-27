#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
//cin.sync_with_stdio(false);
//streambuf
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
int mincost[5001];
vector<pii> tx(5001);
vector<vector<int>> way(5001);
int main() {
	int h, w;
	while (cin >> h >> w,h) {
		int m = h*h+w*w;
		int m1, h1;
		for (m1 = m;; m1++) {
			for (h1 = (m1 == m ? h + 1 : 1); h1*h1*2<m1; h1++) {
				if ((int)sqrt(m1 - h1*h1)*(int)sqrt(m1 - h1*h1)==m1-h1*h1)goto a;
			}
		}
	a:
		cout << h1 <<" "<< (int)sqrt(m1 - h1*h1) << endl;
	}
}