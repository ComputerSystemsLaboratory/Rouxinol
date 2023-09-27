#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	stack<int> stack;
	string line;
	getline(cin, line);
	stringstream ss(line);
	string input;

	while(ss >> input)
	{
		if (input == "+")
		{
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			stack.push(b+a);
		}
		else if (input == "-")
		{
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			stack.push(b-a);
		}
		else if (input == "*")
		{
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			stack.push(a*b);
		}
		else if (input == "/")
		{
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			stack.push(b/a);
		}
		else
		{
			istringstream iss(input);
			int x = 0;
			iss >> x;
			stack.push(x);
		}
	}
	cout << stack.top() << "\n";

	return 0;
}