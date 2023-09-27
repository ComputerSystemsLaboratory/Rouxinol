#include <string>
#include <stack>
#include <sstream>
#include <iostream>
using namespace std;

/*int poptwo(stack<int> S,int n,int m) {
	n = S.top();
	S.pop();
	m = S.top();
	S.pop();
}*/

int n,m,r;
int main() {
	string word;
	stack<int> S;
	while(cin >> word) {
		if(word == "+") {
			n = S.top();
			S.pop();
			m = S.top();
			S.pop();
			r = n + m;
			S.push(r);
		}
		else if(word == "-") {
			n = S.top();
			S.pop();
			m = S.top();
			S.pop();
			r = m - n;
			S.push(r);
		}
		else if(word == "*") {
			n = S.top();
			S.pop();
			m = S.top();
			S.pop();
			r = n * m;
			S.push(r);
		}
		else {
			std::istringstream sin(word);
			sin >> r;
			S.push(r);
		}
	}
	n = S.top();
	cout << n << endl;
}