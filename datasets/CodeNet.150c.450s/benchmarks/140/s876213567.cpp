#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <array>
#include <limits>
#define _USE_MATH_DEFINES
#include <cmath>
#include <tuple>
#include <queue>
#include <functional>
#include <list>

using namespace std;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(int i = (a); i < (b); i++)

const int MAX_NODE_NUM = 10005;
const int MAX_EDGE_NUM = 100005;

list<tuple<int,int>> adjLists[MAX_NODE_NUM];
bool isNodeInST[MAX_NODE_NUM];
int main() {
	int n, m;
	cin >> n >> m;
	REP(i, m) {
		int w, s, t;
		cin >> s >> t >> w;
		adjLists[s].push_back(make_tuple(w,t));
		adjLists[t].push_back(make_tuple(w, s));
	}

	using EdgeType = tuple<int, int>;
	priority_queue<EdgeType, vector<EdgeType>, greater<EdgeType>> q;
	long long cost = 0;
	int stNodeNum = 0;
	int newNode = 0;
	int newCost = 0;
	q.push(make_tuple(newCost, newNode));
	while (stNodeNum < n) {
		tie(newCost, newNode) = q.top();
		q.pop();
		if (isNodeInST[newNode] == false) {
			isNodeInST[newNode] = true;
			cost += newCost;
			stNodeNum++;
			for (auto t : adjLists[newNode]) {
				q.push(t);
			}
		}
	}
	
	cout << cost << endl;

	return 0;
}