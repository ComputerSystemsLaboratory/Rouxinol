#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

int main() {
	priority_queue<int> PQ;
	while (true) {
		char command[10]; cin >> command;
		if (command[0] == 'i') {
			int key; scanf("%d", &key);
			PQ.push(key);
		}
		else if (command[1] == 'x') {
			printf("%d\n", PQ.top());
			PQ.pop();
		}
		else {
			break;
		}
	}
	return 0;
}