#include<stack>
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	stack<int> S;
	string str;
	int A,B;
	while(cin >> str){
		if(str=="+"){
			A=S.top();
			S.pop();
			B=S.top();
			S.pop();
			S.push(B+A);
		}else if(str=="-"){
			A=S.top();
			S.pop();
			B=S.top();
			S.pop();
			S.push(B-A);
		}else if(str=="*"){
			A=S.top();
			S.pop();
			B=S.top();
			S.pop();
			S.push(B*A);
		}else{
			A=(int)strtol(str.c_str(),NULL,0);
			S.push(A);
		}
	}
	A=S.top();
	cout << A << endl;
	return 0;
}
