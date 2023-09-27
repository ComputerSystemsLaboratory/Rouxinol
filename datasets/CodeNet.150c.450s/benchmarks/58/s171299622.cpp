#include<iostream>
#include<string>
#include<sstream>
#include<stack>
#include<cstdlib>
using namespace std;
bool str_isdigit(std::string &str){
	int len = str.length();
	bool dot=false;
	if(len==0) return false;
	else{
		int i=0;
		if(str[0] == '-' || str[0] == '+'){
			if(1 == len) return false;////
			i++;
		}
		for(;i<len;i++){
			if(i>0 && str[i] == '.'){
				if(dot==false)
					dot=true;
				else
					return false;
			}
			if('9' < str[i] || str[i] < '0') return false;
		}
	}
	return true;
}

int gyakupo(int a, int b, char ch){
	if(ch == '+') return a+b;
	if(ch == '-') return a-b;
	if(ch == '*') return a*b;
	return a;
}

int main(){
	stack<int> stk;
	int left, right;
	char ope;
	string str;
	stringstream ss;
	getline(cin,str);
	ss<<str;
	while(ss>>str){
		if(str_isdigit(str)){
			stk.push(atoi(str.c_str()));
		}else{
			ope=str[0];
			right=stk.top();
			stk.pop();
			left=stk.top();
			stk.pop();
			stk.push(gyakupo(left, right, ope));
		}
	}
	cout<<stk.top()<<endl;
	return 0;
}