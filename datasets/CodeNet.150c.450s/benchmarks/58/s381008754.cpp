//============================================================================
// Name        : ReversePoland.cpp
// Author      : koike
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <stack>
#include <sstream>

using namespace std;
const int BLOCK_LENGTH = 3;
const char PLUS = '+';
const char MINUS = '-';
const char POWER = '*';
const char NOT_BLOCK = 'n';
std::stack<int> numStack;


bool strIsDigit(string str) {
	try{
		stoi(str);
	}catch (std::invalid_argument e) {
		return false;
	}

	return true;//std::all_of(str.cbegin(), str.cend(), isdigit)
}

stack<string> getReverseStack(stack<string> &arg) {
	stack<string> ret;
	int argSize = arg.size();

	for (unsigned int i = 0; i < argSize;i++) {
		ret.push(arg.top());
		arg.pop();
	}

	return ret;
}

void calcStackNums(string ope) {

	int result = 0;
	const char* c_ope = ope.c_str();

	//??????????????????????????????????????????
	int var2 = numStack.top();
	numStack.pop();
	int var1 = numStack.top();
	numStack.pop();

	switch (c_ope[0]) {
		case PLUS:
			result = var1 + var2;
			break;
		case MINUS:
			result = var1 - var2;
			break;
		case POWER:
			result = var1 * var2;
			break;
		default:
			cout << "calc error" << endl;
			break;
	}

	numStack.push(result);
}

void calcPoland(vector<string> &formula) {

	string top;

	for (vector<string>::iterator it = formula.begin(); it != formula.end(); ++it)
	{
		if (strIsDigit(*it)) {
			numStack.push(stoi(*it));
		}
		else {
			calcStackNums(*it);
		}
	}
}


vector<string> split(const string &str, char delim) {
	vector<string> res;
	size_t current = 0, found;
	while ((found = str.find_first_of(delim, current)) != string::npos) {
		res.push_back(string(str, current, found - current));
		current = found + 1;
	}
	res.push_back(string(str, current, str.size() - current));
	return res;
}

int main() {

	//?¨??????\?????????
	string s;
	getline(cin, s);
	vector<string> formula = split(s,' ');

	calcPoland(formula);

	cout << numStack.top() << endl;

	return 0;
}