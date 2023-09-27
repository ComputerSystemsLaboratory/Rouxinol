#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void){
	string token;
	stack<int> st;

	while(cin >> token){
		if(token == "+"){
			int op2 = st.top();
			st.pop();
			int op1 = st.top();
			st.pop();
			st.push(op1 + op2);
		}else if(token == "-"){
			int op2 = st.top();
			st.pop();
			int op1 = st.top();
			st.pop();
			st.push(op1 - op2);
		}else if(token == "*"){
			int op2 = st.top();
			st.pop();
			int op1 = st.top();
			st.pop();
			st.push(op1 * op2);
		}else if(token == "/"){
			int op2 = st.top();
			st.pop();
			int op1 = st.top();
			st.pop();
			st.push(op1 / op2);
		}else{
			int op = 0;
			for(int i = 0;i < token.length();i++){
				op = op * 10 + (char)token[i] - '0';
			}
			st.push(op);
		}
	}
	cout << st.top() << endl;

	return 0;
}