#include<iostream>
#include<fstream>
#include<stack>
#include<string>
#include <stdlib.h>

using namespace std;

int getTop(stack<int> &s) {
	int tmp = s.top();
	s.pop();
	return tmp;
}

int main() {
	ifstream fin("in.txt");

	string in;
	stack<int> s;

	int ans = 0;

	while (cin >> in){
		if(in == "+") {
			ans = getTop(s) + getTop(s);
			s.push(ans);
		}
		else if (in == "-") {
			int tmp = getTop(s);
			ans = getTop(s) - tmp;
			s.push(ans);
		}
		else if (in == "*") {
			ans =  getTop(s) * getTop(s);
			s.push(ans);
		}
		else if (in == "/") {
			double tmp = (double)getTop(s);
			double tmp2 = getTop(s) / tmp;
			s.push(1.0 / tmp2);
		}
		else s.push(atoi(in.c_str()));		

	}

	cout << ans << endl;

	return 0;
}