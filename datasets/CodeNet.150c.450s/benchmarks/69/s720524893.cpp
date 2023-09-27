#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {

	stack<int> B, C;
	int n,ball;

	cin >> n;

	for(int j=0;j<n;j++){
		for (int i = 0; i < 10; i++) {
			cin >> ball;

			if (i == 0)
				B.push(ball);

			else if (B.top() > ball)

				if (C.empty())
					C.push(ball);

				else if (C.top() < ball)
					C.push(ball);

				else {
					cout << "NO" << endl;
					break;
				}

			else {
				if (B.top() < ball)
					B.push(ball);
				else {
					cout << "NO" << endl;
					break;
				}
			}

			if (i == 9)
				cout << "YES" << endl;
		}
		while (1) {
			B.pop();
			if (B.empty())
				break;
		}
		while (1) {
			C.pop();
			if (C.empty())
				break;
		}
	}

	return 0;
}