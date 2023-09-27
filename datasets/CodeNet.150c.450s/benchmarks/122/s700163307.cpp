#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>
#define INF 1050000000
 
using namespace std;

int main(void)
{
	priority_queue<int> que;
	string s;

	while (cin >> s) {
		if(s == "end") break;

		if(s == "insert") {
			int x;
			cin >> x;
            que.push(x);
		}

		if (s == "extract") {
			cout << que.top() << endl;
            que.pop();
        }
	}

	return (0);
}