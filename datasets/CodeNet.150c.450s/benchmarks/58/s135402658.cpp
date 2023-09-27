#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	stack<int> st;
	string n;
	int x,y;
	while(cin >> n){
		if(n == "+"){
			x = st.top();
			st.pop();
			y = st.top();
			st.pop();
			st.push(y+x);
		}else if(n == "-"){
			x = st.top();
			st.pop();
			y = st.top();
			st.pop();
			st.push(y-x);
		}else if(n == "*"){
			x = st.top();
			st.pop();
			y = st.top();
			st.pop();
			st.push(y*x);
		}else{
			st.push(stoi(n));
		}
	}
	cout << st.top() << endl;
	return 0;
}	