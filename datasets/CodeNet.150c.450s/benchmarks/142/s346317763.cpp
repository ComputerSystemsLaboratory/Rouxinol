#include <string>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <iostream>
#include <functional>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <cmath>
#include <limits>
#include <tuple>
#include <queue>
#include <stack>
#include <bitset>

using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define all(c) c.begin(), c.end()

int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> A(N);
	rep(i, N) {
		cin >> A[i];
	}
	rep(i, N-K) {
		if (A[i] < A[K+i]) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}
