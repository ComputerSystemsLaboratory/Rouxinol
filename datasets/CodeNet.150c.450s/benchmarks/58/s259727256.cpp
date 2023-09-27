#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class mystack {
	private:
		int val[1000];
		int sp = -1;
	public:
		void push(int n) {
			sp++;
			val[sp] = n;
		}
		void pop() {
			if(sp >= 0)
			sp--;
		}
		int top() {
			return val[sp];
		}
};

int main() {
	string s;
	mystack t;
	while(cin >> s) {
		int op1 = t.top();t.pop();
		int op2 = t.top();t.pop();
		switch(s[0]) {
			case '+':
				t.push(op1+op2);
				break;
			case '-':
				t.push(op2-op1);
				break;
			case '*':
				t.push(op1*op2);
				break;
			default:
				t.push(op2);
				t.push(op1);
				t.push(atoi(s.c_str()));
				break;
		}
	}
	cout << t.top() << endl;
}

