#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int g;
	stack<int> a;
	queue<int> b;
	while(cin >> g) if (g!=0) a.push(g); else { b.push(a.top()); a.pop();}
	while(!b.empty()) { cout << b.front() << endl; b.pop(); } 
	return 0;
}