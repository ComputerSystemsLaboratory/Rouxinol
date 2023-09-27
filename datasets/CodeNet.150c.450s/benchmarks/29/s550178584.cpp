#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
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
	list<int> l;

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		char command[10];
		int key;
		cin >> command;
		if (command[0] == 'i') {
			scanf("%d", &key);
			l.push_front(key);
		}
		else if (command[6] == 'F') {
			l.pop_front();
		}
		else if (command[6] == 'L') {
			l.pop_back();
		}
		else if (command[0] == 'd') {
			scanf("%d", &key);
			for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
				if (*it == key) {
					l.erase(it);
					break;
				}
			}
		}
	}

	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		if (it != l.begin())printf(" ");
		printf("%d", *it);
	}
	cout << endl;

	return 0;
}