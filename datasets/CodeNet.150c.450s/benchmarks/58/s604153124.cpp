#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

int main(){
	int a, b;
	stack<int> st;
	string op;
	while (cin >> op){
		//cout << op << endl;
		if (isdigit(op[0])) st.push(stoi(op));
		else {
			b = st.top();
			st.pop();
			a = st.top();
			st.pop();
			switch (op[0]){
			case '+':
				st.push(a + b);
				break;
			case '-':
				st.push(a - b);
				break;
			case '*':
				st.push(a * b);
				break;
			}
		}
	}
	cout << st.top() << endl;
}