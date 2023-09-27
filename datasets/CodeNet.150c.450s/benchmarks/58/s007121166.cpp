#include <iostream>
#include <stack>
#include <ctype.h>
#include <string>
using namespace std;

int main() {
	stack <int> st;
	string s;
	while(cin >> s){
		char c = s[0];
		if(isdigit(c)){
			st.push(stoi(s));
		}
		else{
			int y=st.top();
			st.pop();
			int x=st.top();
			st.pop();
			int z=0;
			if(c=='+') z=x+y;
			else if(c=='-') z=x-y;
			else if(c=='*') z=x*y;
			else if(c=='/') z=x/y;
			st.push(z);
		}
	}
	cout << st.top() <<endl;
		
	return 0;
}