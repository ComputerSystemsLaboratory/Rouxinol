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
//#include "toollib.h"
//#include "puzzle.h"
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#pragma warning (disable:4018)
#pragma warning (disable:4244)
#pragma warning (disable:4996)

using namespace std;
typedef long long int lint;


//***** Main Program *****

int main() {
	int n;
	cin >> n;
	deque<int> dq;
	Loop(i, n) {
		char cmd[20];
		int x;
		scanf("%s", cmd);
		if (cmd[0] == 'i') {
			scanf("%d", &x);
			dq.push_front(x);
		}
		else if (cmd[0] == 'd'&&cmd[6] == '\0') {
			scanf("%d", &x);
			Loop(i, dq.size()){
				if (dq[i] == x) {
					dq.erase(dq.begin() + i);
					break;
				}
			}
		}
		else if (cmd[6] == 'F') dq.pop_front();
		else if (cmd[6] == 'L') dq.pop_back();
		else return -1;
	}
	while (dq.size() > 1) {
		printf("%d ", dq.front());
		dq.pop_front();
	}
	if (dq.size() > 0) cout << dq.front() << endl;
	return 0;
}