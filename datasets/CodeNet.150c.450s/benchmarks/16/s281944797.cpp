#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

string input;
queue<char> q,q2;
vector<int> pool;

//?°´???????????????????????°???
int f() {

	while(true) {
		if(q.empty()) return 0;
		if(q.front() == '\\') break;
		q.pop();
	}

	int h = 0,oldh = 0,res = 0;
	while(!q2.empty()) q2.pop();
	while(true) {
		char c = q.front();
		h += (c == '\\');
		h -= (c == '/');

		res += h + oldh;

		if(h == 0) {
			break;
		}

		q2.push(c);
		q.pop();
		if(q.empty()) {
			q2.pop();
			q = q2;
			return f();
		}

		oldh = h;
	}
	return res;
}

int main() {
	cin >> input;
	for(int i = 0;i < input.size();i++) q.push(input[i]);
	int n = f() / 2;
	while(n != 0) {
		pool.push_back(n);
		n = f() / 2;
	}

	int total = 0;
	for(int i = 0;i < pool.size();i++) total += pool[i];

	cout << total << endl;
	cout << pool.size();
	for(int i = 0;i < pool.size();i++) cout << " " << pool[i];
	cout << endl;
}