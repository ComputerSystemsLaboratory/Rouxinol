#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
	string str;
	int a,b;
	stack<int> s;
	while(cin >> str){
		switch(str[0]){
			case '+': a=s.top();s.pop();b=s.top();s.pop();s.push(b+a);break;
			case '-': a=s.top();s.pop();b=s.top();s.pop();s.push(b-a);break;
			case '*': a=s.top();s.pop();b=s.top();s.pop();s.push(b*a);break;
			default : s.push(stoi(str));break;
		}
	}	
	cout << s.top() << endl;
	return 0;
}