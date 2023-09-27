#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	vector<long> v;
	long a, b;
	char op;
	while (1)
	{
		cin >> a >>op>> b;
		if (op == '?')break;
		else if (op == '+')v.push_back(a + b);
		else if(op=='-')v.push_back(a - b);
		else if (op == '*')v.push_back(a * b);
		else if (op == '/')v.push_back(a / b);
	}
	for (long l : v)
	{
		cout << l << endl;
	}
}
