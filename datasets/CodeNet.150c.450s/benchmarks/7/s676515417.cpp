#include <iostream>
#include <queue>
using namespace std;

int main() {
	priority_queue<int> Q;
	for(int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		Q.push(a);
	}
	for(int i = 0; i < 3; i++) {
		cout << Q.top() << endl;
		Q.pop();
	}
}