#include<utility>
#include<algorithm>
#include<vector>
#include<string>
#include<queue>
#include<deque>
#include<stack>
#include<complex>
#include<cmath>
#include<iostream>
#include<set>
#include<map>
#include<sstream>
#include<fstream>
#include<climits>
#include<chrono>
#include<random>
#include<functional>
#include<regex>

using namespace std;
typedef pair<int, int> P;
typedef long long ll;

// ??§????????°INF
const int INF = (1 << 30);
// ?¨±?????????????????
const double EPS = (1e-10);
// 2??????????????????????????????????????????
#define EQ(a,b) (abs((a)-(b)) < EPS)


int main()
{
	int n;
	string o;
	while (true) {
		cin >> n;
		if (n == 0)break;
		int up_or_down = 0;
		bool on = false, l_on = false, r_on = false;
		for (int i = 0; i < n; ++i) {
			cin >> o;
			if (o == "lu") {
				l_on = true;
				if ((!on)&&r_on) {
					on = true;
					++up_or_down;
				}
			}
			else if (o == "ru") {
				r_on = true;
				if ((!on)&&l_on) {
					on = true;
					++up_or_down;
				}
			}
			else if (o == "ld") {
				l_on = false;
				if (on && (!r_on)) {
					on = false;
					++up_or_down;
				}
			}
			else {
				r_on = false;
				if (on && (!l_on)){
					on = false;
					++up_or_down;
				}
			}
		}
		cout << up_or_down << endl;
	}
}