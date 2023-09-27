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
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i < (int)n; i++)
#define Loopr(i, n) for(int i= (int)n - 1; i >= 0; i--)

using namespace std;
typedef long long int ll;

int main() {
	int n, q;
	cin >> n;
	queue<int> line;
	int c;
	line.push(0);
	c = 1;
	Loop(i, n) {
		int x;
		cin >> x;
		Loop(j, c) {
			int a = line.front();
			line.pop();
			line.push(a);
			line.push(a + x);
		}
		c *= 2;
	}
	cin >> q;
	Loop(i, q) {
		int y;
		cin >> y;
		bool judge = false;
		Loop(j, c) {
			int a = line.front();
			if (y == a) {
				judge = true;
				break;
			}
			else {
				line.pop();
				line.push(a);
			}
		}
		if (judge) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}