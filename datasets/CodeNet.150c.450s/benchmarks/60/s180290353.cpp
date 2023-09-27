#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
#define INT_MAX 2147483647
#define INT_MIN -2147483646
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
using namespace std;
typedef long long int ll;

bool mx[105][105];

int main() {
	int n;
	cin >> n;
	Loop1(i, n) {
		Loop1(j, n) {
			mx[i][j] = 0;
		}
	}
	Loop(i, n) {
		int u, k;
		cin >> u >> k;
		Loop(j, k) {
			int v;
			cin >> v;
			mx[u][v] = 1;
		}
	}
	Loop1(i, n) {
		Loop1(j, n - 1) {
			cout << mx[i][j] << " ";
		}
		cout << mx[i][n] << endl;
	}
	return 0;
}