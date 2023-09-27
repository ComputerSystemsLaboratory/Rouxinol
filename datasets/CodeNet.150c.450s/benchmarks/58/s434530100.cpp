#define _USE_MATH_DEFINES
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<string>
#include<iomanip>
#include<cassert>
#include<functional>
typedef long long ll;

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);

	std::string cur_char;
	int stack_count = 0;
	std::vector<int> stack;
	
	while (std::cin >> cur_char){
		switch (cur_char[0]){
		case '+':
			stack[stack_count - 2] += stack[stack_count - 1];
			stack.pop_back();
			stack_count--;
			break;
		case '-':
			stack[stack_count - 2] -= stack[stack_count - 1];
			stack.pop_back();
			stack_count--;
			break;
		case '*':
			stack[stack_count - 2] *= stack[stack_count - 1];
			stack.pop_back();
			stack_count--;
			break;
		default:
			stack.push_back(std::atoi(cur_char.c_str()));
			stack_count++;
			break;
		}
	}

	std::cout << stack[0] << '\n';

	return 0;
}
