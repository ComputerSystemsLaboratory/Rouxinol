#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
//#include "toollib.h"
//#include "puzzle.h"
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#pragma warning (disable:4018)
#pragma warning (disable:4244)

using namespace std;
typedef long long int lint;


//***** Main Program *****

int main() {
	stack<int> stk;
	string input;
	getline(cin, input);
	string s = "";
	Loop(i, input.length()) {
		if ('0' <= input[i] && input[i] <= '9') {
			s.push_back(input[i]);
		}
		else if (input[i] == ' ') {
			if (s.length() != 0) {
				stk.push(atoi(s.c_str()));
				s = "";
			}
		}
		else {
			int b = stk.top();
			stk.pop();
			int a = stk.top();
			stk.pop();
			if (input[i] == '+') 	stk.push(a + b);
			else if (input[i] == '-') stk.push(a - b);
			else if (input[i] == '*') stk.push(a*b);
		}
	}
	cout << stk.top() << endl;
	return 0;
}