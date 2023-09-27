#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	stack<int> S;
	string buf;
	while (cin >> buf){
		if (buf == "+") {
			int b = S.top();
			S.pop();
			int a = S.top();
			S.pop();
			S.push(a + b);
		}
		else if (buf == "-") {
			int b = S.top();
			S.pop();
			int a = S.top();
			S.pop();
			S.push(a - b);
		}
		else if (buf == "*") {
			int b = S.top();
			S.pop();
			int a = S.top();
			S.pop();
			S.push(a * b);
		}
		else {
			S.push(stoi(buf));
		}
	}
	cout << S.top() << endl;
}