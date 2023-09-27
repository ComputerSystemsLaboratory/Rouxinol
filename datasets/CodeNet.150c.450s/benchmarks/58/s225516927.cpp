// STACK.cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack <int> stk;
string a;
string b="";
int c;
int t1;
int t2;
int main()
{
	getline(cin,a);
	for(int j=0;j<a.size();j++){
		if(a[j] == ' '){
			if(b == ""){continue;}
			c = stoi(b);
			stk.push(c);
			b = "";
			continue;
		}
		if(a[j] == '+'){
			t1 = stk.top();
			stk.pop();
			t2 = stk.top();
			stk.pop();
			stk.push(t2+t1);
			continue;
		}
		if(a[j] == '-'){
			t1 = stk.top();
			stk.pop();
			t2 = stk.top();
			stk.pop();
			stk.push(t2-t1);
			continue;
		}
		if(a[j] == '*'){
			t1 = stk.top();
			stk.pop();
			t2 = stk.top();
			stk.pop();
			stk.push(t2*t1);
			continue;
		}
		b += a[j];
	}
	cout << stk.top() << endl;
	cin.get();
	return 0;
}