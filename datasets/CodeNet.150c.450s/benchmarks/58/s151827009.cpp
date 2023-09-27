#include <stdlib.h>
#include <stack>
#include <string>
#include <iostream>
using namespace std;

void rpn(string next_value, stack<int> &operand);
void print_array(int *array, int size);
int main(){
	string next_value;
	stack<int> operand;

	while(cin >> next_value){
		rpn(next_value, operand);
	}

	cout << operand.top() <<endl;
	return 0;
}
void rpn(string next_value, stack<int> &operand){
	if(next_value[0] == '+'){
		int right = operand.top(); operand.pop();
		int left = operand.top(); operand.pop();
		operand.push(left+right);
	}else if(next_value[0] =='-'){
		int right = operand.top(); operand.pop();
		int left = operand.top(); operand.pop();
		operand.push(left-right);
	}else if(next_value[0] == '*'){
		int right = operand.top(); operand.pop();
		int left = operand.top(); operand.pop();
		operand.push(left*right);
	}else{
		operand.push(atoi(next_value.c_str()));
	}
}