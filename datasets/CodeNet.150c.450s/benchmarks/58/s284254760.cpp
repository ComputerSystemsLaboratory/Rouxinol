#include<iostream>
#include<string>
#include<cstdlib>
#include<stack>
using namespace std;

int main(void) {
	string str;
	int number[1000],count = 0;
	stack<int> num;
	while(cin >> str) {
		if (str[0] == '+') {
			int a = num.top(); num.pop();
			int b = num.top(); num.pop();
			num.push(a + b);
		} else if (str[0] == '-') {
			int b = num.top(); num.pop();
			int a = num.top(); num.pop();
			num.push(a - b);
		} else if (str[0] == '*') {
			int a = num.top(); num.pop();
			int b = num.top(); num.pop();
			num.push(a * b);
		} else if (str[0] == ' ') {
		}else{
			num.push(atoi(str.c_str()));
		}
	}
	cout << num.top() << endl;
	return 0;
}