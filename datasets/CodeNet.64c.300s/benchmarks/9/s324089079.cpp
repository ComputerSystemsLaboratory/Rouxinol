#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>
#include <queue>

#define INF 100000000
#define EPS 1e-9

using namespace std;

typedef pair<int, int> P;
typedef long long ll;

int n;

int main() {

	cin >> n;

	ll ans = 100000;

	while (n > 0){
		n--;
		ans *= 1.05;
		if (ans % 1000 != 0){
			ans = (ans / 1000) * 1000 + 1000;
		}
	}

	cout << ans << endl;

	return 0;
}