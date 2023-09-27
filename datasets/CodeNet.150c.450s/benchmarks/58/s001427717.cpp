#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main(){
	stack<long> st;
	string s;
	while (cin >> s){
		if (s == "+" || s == "-" || s == "*"){
			long a = st.top();
			st.pop();
			long b = st.top();
			st.pop();
			if (s == "+") st.push(b + a);
			else if (s == "-") st.push(b - a);
			else st.push(b * a);
		}
		else {
			stringstream ss;
			long a;
			ss << s;
			ss >> a;
			st.push(a);
		}
	}
	cout << st.top() << endl;
	return 0;
}