#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;

int top = 0;
int s[1000];

void push(int n){
	++top;
	s[top] = n;
}

int pop(){
	--top;
	return s[top + 1];
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string str;
	getline(cin, str);
	//cin >> str;

	int prev = 0;
	size_t i0 = 0;
	while(i0 <= str.size()){
		string s0;
		if(str[i0] == ' ' || i0 == str.size()){
			s0 = str.substr(prev, i0 - prev);
			//cout << s0 << endl;
			prev = i0 + 1;
			int a = 0;
			int b = 0;
			if(s0[0] == '+'){
				b = pop();
				a = pop();
				push(a + b);
			}
			else if(s0[0] == '-'){
				b = pop();
				a = pop();
				push(a - b);
			}
			else if(s0[0] == '*'){
				b = pop();
				a = pop();
				push(a * b);
			}
			else if(s0[0] == '/'){
				b = pop();
				a = pop();
				push(a / b);
			}
			else {
				//push(stoi(s0));
				istringstream is(s0);
				int a0;
				is >> a0;
				push(a0);
			}
		}
		++i0;
	}

	cout << pop() << endl;

	return 0;
}