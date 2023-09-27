#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	int k, m, a, b;
	char c;
	while (cin.get(c)){
		if (isdigit(c)){
			k = c - '0';
			while (cin.get(c)){
				if (isdigit(c)){
					m = c - '0';
					k = 10 * k + m;
				}
				else{
					break;
				}
			}
			s.push(k);
		}
		else{
			if( c == ' ' ) continue;
			if( c == '\n' ) break;

			a = s.top(); s.pop();
			b = s.top(); s.pop();

			switch (c)
			{
			case '+': s.push(b + a); break;
			case '-': s.push(b - a); break;
			case '*': s.push(b * a); break;
			}
		}
	}

	cout << s.top() << "\n";

	return 0;
}