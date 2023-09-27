#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <cstdlib>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define INF 100000000
#define _INF -100000000
#define INFLL (long long)1e14
#define _INFLL (long long)-1e14
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef pair<int, int> P;

class self_made_pq {
public:
	vi heap;
	int n, inf;
	bool ord; //true????????§??????????????????pop
	bool comp(int a, int b){
		if (ord) return a > b;
		else return a < b;
	}
public:
	self_made_pq(int N, bool b) {
		heap.resize(N * 2 - 1);
		ord = b;
		if (ord) inf = INT_MIN;
		else inf = INT_MAX;
		fill(heap.begin(), heap.end(), inf);
		n = 0;
	}
	void ins(int a) {
		heap[n] = a;
		n++;
		int k1 = n - 1, k2 = n - 1;
		while (k2 > 0) {
			k2 = (k1 - 1) / 2;
			if (comp(heap[k1], heap[k2])) swap(heap[k1], heap[k2]);
			else break;
			k1 = k2;
		}
	}
	int pop() {
		if (n == 0) return inf;
		int ret = heap[0];
		heap[0] = heap[n - 1];
		heap[n - 1] = inf;
		n--;
		int k1 = 0, k2 = 0;
		while (true) {
			k2 = k1 * 2 + 1;
			if (comp(heap[k2], heap[k1])) {
				if (comp(heap[k2 + 1], heap[k2])) {
					swap(heap[k2 + 1], heap[k1]);
					k1 = k2 + 1;
				}
				else {
					swap(heap[k2], heap[k1]);
					k1 = k2;
				}
			}
			else if (comp(heap[k2 + 1], heap[k1])) {
				swap(heap[k2 + 1], heap[k1]);
				k1 = k2 + 1;
			}
			else break;
		}
		return ret;
	}
};



int main() {
	self_made_pq pq(2e6, true);
	while (true) {
		string s; cin >> s;
		if (s == "end") break;
		else if (s == "extract") cout << pq.pop() << endl;
		else {
			int x; cin >> x;
			pq.ins(x);
		}
		int t = 1;
	}
	return 0;
}