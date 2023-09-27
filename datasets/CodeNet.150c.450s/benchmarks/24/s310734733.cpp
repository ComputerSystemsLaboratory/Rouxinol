#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
using namespace std;

typedef ostringstream oss;
typedef istringstream iss;

struct Node{
	int dis;
	int p;
};

bool myless(const Node& n1, const Node& n2) {
	return n1.p > n2.p;
}

int main(void) {
	int N, money;
	while (cin >> N >> money, N) {
		vector<Node> node(N);
		for (int i = 0; i < N; i++) {
			cin >> node[i].dis >> node[i].p;
		}

		sort(node.begin(), node.end(), myless);
		
		for (int i = 0; i < N; i++) {
			if (!money) {
				break;
			}
			if (money > node[i].dis) {
				money -= node[i].dis;
				node[i].dis = 0;
			}else {
				node[i].dis -= money;
				money = 0;
			}
		}

		int sump = 0;
		for (int i = 0; i < N; i++) {
			sump += node[i].dis * node[i].p;
		}
		cout << sump << endl;
	}

	return 0;
}