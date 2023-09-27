// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A&lang=jp

#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main() {
	string input = "";
	vector<string> data = {};
	getline(cin, input);
	string parseTmp = "";
	for (auto it = input.begin(); it != input.end(); ++it) {
		if (*it == ' ') {
			data.push_back(parseTmp);
			parseTmp = "";
		} else {
			parseTmp.push_back(*it);
		}
	}
	data.push_back(parseTmp);

	vector<int> stack = {};

	for (auto it = data.begin(); it != data.end(); ++it) {
		string c = *it;
		if (c == "+" || c == "-" || c == "*" || c == "/") {
			int num2 = stack.back();
			stack.pop_back();
			int num1 = stack.back();
			stack.pop_back();
			int num =
				(c == "+" ? num1 + num2 :
				(c == "-" ? num1 - num2 :
				(c == "*" ? num1 * num2 :
				(c == "/" ? num1 / num2 : 0))));
			stack.push_back(num);
		} else {
			stringstream ss(c);
			int operand;
			ss >> operand;
			stack.push_back(operand);
		}

	}

	cout << stack.back() << endl;
}