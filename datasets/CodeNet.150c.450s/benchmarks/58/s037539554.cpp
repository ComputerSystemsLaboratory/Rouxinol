#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class stack
{
	public:
	int s[100];
	int t;

public:
	void initialize();
	void push(int x);
	int pop();
};

void stack::initialize()
{
	t = 0;
}

void stack::push(int x)
{
	s[t] = x;
	t++;
}

int stack::pop()
{
	t--;
	return s[t];
}



int main()
{
	stack st;
	string ch;
	int a,b;

	st.initialize();

	while(cin >> ch)
	{
		if (ch == "+")
		{
			a = st.pop();
			
			b = st.pop();
			
			st.push(a+b);

		}
		else if (ch == "-")
		{
			a = st.pop();
			
			b = st.pop();
			
			st.push(b-a);
		}
		else if (ch == "*")
		{
			a = st.pop();
			
			b = st.pop();
			
			st.push(a*b);
		}
		else
		{
			st.push(atoi(ch.c_str()));
		}
	}

	cout << st.s[0] << "\n";

	return 0;
}