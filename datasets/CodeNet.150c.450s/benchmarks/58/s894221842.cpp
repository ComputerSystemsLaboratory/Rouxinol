#include <iostream>
#include <stack>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;
stack<long> s;
int main(){
	string str;
	while (cin >> str){
		if (str[0] == '+' || str[0] == '-' || str[0] == '*'){
			char ch; ch = str[0];
			long b = s.top(); s.pop();
			long a = s.top(); s.pop();
			if (ch == '+') s.push(a + b);
			else if (ch == '-') s.push(a - b);
			else if (ch == '*') s.push(a*b);
		}
		else {
			long tmp = atoi(str.c_str());
			s.push(tmp);
		}
	}
	cout << s.top() << '\n';
}