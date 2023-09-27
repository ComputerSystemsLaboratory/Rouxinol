#include <bits/stdc++.h>
using namespace std;

int main(void){
	stack<int> st;
	string s;
	while(cin >> s){
		char c = s[0];
		if(isdigit(c)){
			st.push(stoi(s));
		}else{
			int b = st.top();st.pop();
			int a = st.top();st.pop();
			int ret = 0;
			if(c == '+') ret = a + b;
			else if(c == '-') ret = a - b;
			else if(c == '*') ret = a * b;
			st.push(ret);
		}
		cin.ignore();
	}	
	cout << st.top() << endl;
	return 0;
}