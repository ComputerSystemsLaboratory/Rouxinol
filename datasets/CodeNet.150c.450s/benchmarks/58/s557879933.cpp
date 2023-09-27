#include<iostream>
#include<stack>
#include<cctype>
#include<cstdlib>
using namespace std;

int main(void){
	stack<int> st;
	string ch;
	while(cin >> ch){
		if(isdigit(ch[0])){
			st.push(atoi(ch.c_str()));
		}
		else{
			int a = st.top();
			st.pop();
			int b = st.top();
			st.pop();
			if(ch == "+") st.push(b + a);
			if(ch == "-") st.push(b - a);
			if(ch == "*") st.push(b * a);
		}
	}
	cout << st.top() << endl;
	return 0;
}
