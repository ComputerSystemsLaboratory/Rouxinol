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

int main() {
	priority_queue<int> pq;
	string str;
	int k;
	while (1) {
		cin >> str;
		if (str == "insert") {
			cin >> k;
			pq.push(k);
		}
		else if (str == "extract") {
			cout << pq.top() << endl;
			pq.pop();
		}
		else if (str == "end") {
			break;
		}
	}
	return 0;
}