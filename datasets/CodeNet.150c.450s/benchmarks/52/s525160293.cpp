#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

template <typename Type>
struct print_endl : public unary_function < const Type&, void >
{
	void operator()(const Type& n)
	{
		cout << n << endl;
	}
};


int main()
{
	stack<int> s;

	vector<int> Ans;

	int temp;

	while (cin >> temp)
	{
		if (temp != 0)
		{
			s.push(temp);
		}
		else
		{
			Ans.push_back(s.top());

			s.pop();
		}
	}

	for_each(Ans.begin(), Ans.end(), print_endl<int>());

	return 0;
}