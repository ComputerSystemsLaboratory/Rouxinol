#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	int N;
	stack<int> train;
	queue<int> leave;
	while (cin >> N) {
		if (N == 0) {
			leave.push(train.top());
			train.pop();
		}
		else {
			train.push(N);
		}
	}
	for (; leave.empty() == 0;) {
		cout << leave.front() << endl;
		leave.pop();
	}
	return 0;
}