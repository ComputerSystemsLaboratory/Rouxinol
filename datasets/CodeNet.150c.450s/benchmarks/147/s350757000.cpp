#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <iostream> // cout, endl, cin
#include <iomanip>
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <math.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	for (int n = 1; n <= N; n++) {
      int cnt = 0;
		for (int x = 1; x < 100; x++) {
			if (x * x > n) break;
			for (int y = 1; y < 100; y++) {
				if (x * x + y * y > n) break;
				for (int z = 1; z < 100; z++) {
					if (x * x + y * y + z * z + x * y + y * z + z * x > n) break;
					if (x * x + y * y + z * z + x * y + y * z + z * x == n) cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}