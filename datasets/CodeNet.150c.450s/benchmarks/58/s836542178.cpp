#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;

int stackReturn(stack<int> *S){
	int x = (*S).top();
	(*S).pop();
	return x;
}

int main(){
	stack<int> S;
	string str;
	int a;

	while(cin>>str){
		if(str == "+")
			S.push(stackReturn(&S) + stackReturn(&S));
		else if(str == "-"){
			a = stackReturn(&S);
			S.push(stackReturn(&S) - a);
		}else if(str == "*")
			S.push(stackReturn(&S) * stackReturn(&S));
		else
			S.push(atoi(str.c_str()));
	}

	cout<<S.top()<<endl;

	return 0;
}