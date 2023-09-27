#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;


int main(){
	int temp;
	string s;
	stringstream ss;
	stack<int> st;
	while(cin >> s){
		int a,b;
		switch(s[0]){

			case '+':
			b=st.top();
			st.pop();
			a=st.top();
			st.pop();
			st.push(a+b);
			break;
			case '-':
			b=st.top();
			st.pop();
			a=st.top();
			st.pop();
			st.push(a-b);
			break;
			case '*':
			b=st.top();
			st.pop();
			a=st.top();
			st.pop();
			st.push(a*b);			
			break;
			default:
			ss<<s;
			ss>>temp;
			ss.clear();
			st.push(temp);
			break;
		}
	}
	cout << st.top()<< endl;
	return 0;
}