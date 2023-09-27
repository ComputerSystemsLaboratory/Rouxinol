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
	while (true) {
		cin >> n;
		if (n == 0)break;
		vector<int> judges(n);
		int total = 0;
		for (int i = 0; i < n; ++i) {
			cin >> judges[i];
			total += judges[i];
		}
		int M = *max_element(judges.begin(), judges.end()),m=*min_element(judges.begin(),judges.end());
		total -= (M + m);
		int ans = total / (n - 2);
		cout << ans << endl;
	}
}