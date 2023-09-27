#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>

#include <cstdio>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(i, s, n) for (int i = (s); i <= (n); i++)
#define rrep(i, n) for (int i = (n) - 1; i >= 0; i--)
#define rrep1(i, s, n) for (int i = (s); i >= (n); i--)
#define print_array(ary, size) cout << ary[0]; rep1(i, 1, size - 1) cout << ' ' << ary[i]; cout << endl;
typedef long long ll;
typedef unsigned long long ull;

int A[251];

int main()
{
	int H;

	cin >> H;
	rep1(i, 1, H) cin >> A[i];

	rep1(i, 1, H) {
		printf("node %d: key = %d, ", i, A[i]);
		if (i >= 2) printf("parent key = %d, ", A[i / 2]);
		if (i * 2 <= H) printf("left key = %d, ", A[i * 2]);
		if (i * 2 + 1 <= H) printf("right key = %d, ", A[i * 2 + 1]);
		printf("\n");
	}

	return 0;
}
