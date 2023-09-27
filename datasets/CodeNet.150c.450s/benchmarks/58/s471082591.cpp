#include<string>
#include<iostream>
using namespace std;

class myStack {
public:
	void push(int x) {
		S[++top] = x;
	}
	int pop() {
		top--;
		return S[top + 1];
	}

private:
	int top = 0;
	int S[1000] = { 0 };
};

int main() {
	string s;
	myStack sta;

	std::cin >> s;
	while (!std::cin.eof()) {
		if (s[0] == '+') {
			int a = sta.pop();
			int b = sta.pop();
			sta.push(b + a);
		}
		else 	if (s[0] == '-') {
			int a = sta.pop();
			int b = sta.pop();
			sta.push(b - a);
		}
		else 	if (s[0] == '*') {
			int a = sta.pop();
			int b = sta.pop();
			sta.push(b * a);
		}
		else {
			int i; 
			i = stoi(s);
			sta.push(i);
		}

		std::cin >> s;
	}

	cout << sta.pop() << endl;

	return 0;
}