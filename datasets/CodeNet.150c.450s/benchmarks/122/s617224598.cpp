# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
using namespace std;
using LL = long long;
constexpr int MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
const double PI = acos(-1);

int main() {
	priority_queue<int>pq;
	string s;
	int n;
	while (cin >> s&&s != "end") {
		if (s == "insert") {
			cin >> n;
			pq.push(n);
		}
		else {
			cout << pq.top() << endl;
			pq.pop();
		}
	}
}