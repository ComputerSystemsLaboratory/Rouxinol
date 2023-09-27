#include <iostream>
using namespace std;

int main()
{
	int a, b, n, i=0;
	int ans[100];
	char op;
	
	do {
		cin >> a >> op >> b;
		if (op == '+')
			ans[i++] = a + b;
		else if (op == '-')
			ans[i++] = a - b;
		else if (op == '*')
			ans[i++] = a * b;
		else if (op == '/')
			ans[i++] = a / b;
	} while (op != '?');
	
	n = i;
	i = 0;

	while (i < n)
		cout << ans[i++] << endl;
	
	return 0;
}