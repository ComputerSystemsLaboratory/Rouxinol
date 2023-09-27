#include<iostream>
#include<stack>
#include<string>
#include<string.h>
using namespace std;
stack<int>S1;
char opt[3] = { '+','-','*' };
bool isOpt(char a) {
	for (int i = 0; i<3; i++) {
		if (a == opt[i])
			return true;
	}
	return false;
}
int main() {
	string temp;
	char a;
	while (cin>>temp) {
		if (temp.length() == 1) {
			a = temp[0];
		}
		else {
			a = '0';
		}
		if (isOpt(a)) {//是操作码,弹出两个操作数，执行操作 s2 opt s1
			int x1 = S1.top(); 
			S1.pop();
			int x2 = S1.top(); 
			S1.pop();
			int y1;
			switch (a) {
			case '+':
				y1 = x1 + x2;
				S1.push(y1);
				break;
			case '-':
				y1 = x2 - x1;
				S1.push(y1);
				break;
			case '*':
				y1 = x1*x2;
				S1.push(y1);
				break;
			}
		}
		else {//是操作数
			int x = atoi(temp.c_str());
			S1.push(x);
		}
	}
	int ans = S1.top();
	S1.pop();
	cout << ans << endl;
	return 0;
}
