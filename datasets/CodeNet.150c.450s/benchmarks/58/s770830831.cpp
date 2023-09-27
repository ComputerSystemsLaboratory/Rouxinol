#include<iostream>
#include<stack>
#include<cstdlib>
#include<string>

using namespace std;

int main(){
	stack<int> st;
	int num1,num2;
	while (true){
		string c;
		cin >> c;
		if (cin.eof()) break;
		if (c == "+"){
			num1 = st.top();
			st.pop();
			num2 = st.top();
			st.pop();
			st.push(num1+num2);
		}else if (c == "-"){
			num1 = st.top();
			st.pop();
			num2 = st.top();
			st.pop();
			st.push(num2-num1);
		}else if (c == "*"){
			num1 = st.top();
			st.pop();
			num2 = st.top();
			st.pop();
			st.push(num1*num2);
		}else{
			st.push(stoi(c));
		}
		

	}
	cout << st.top() << endl;
return 0;
}