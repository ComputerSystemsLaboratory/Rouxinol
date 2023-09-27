#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int a, b, c; char op;

	vector<int> Ans;

	while(true)
	{
		cin >> a >> op >> b;

		if(op == '+') { c = a + b; }
		if(op == '-') { c = a - b; }
		if(op == '*') { c = a * b; }
		if(op == '/') { c = a / b; }
		if(op == '?') { break; }

		Ans.push_back(c);
	}

	for(vector<int>::size_type i = 0; i < Ans.size(); i++)
	{
		cout << Ans[i] << endl;
	}

	return 0;
}