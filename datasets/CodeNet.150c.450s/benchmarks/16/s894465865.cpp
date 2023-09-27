#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <stack>



using namespace std;

/*class stack
{
	public:
	int s[10000];
	int t,temp;

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
	t++;
	s[t] = x;
}

int stack::pop()
{
	temp = s[t];
	t--;
	return temp;
}*/



int main()
{
	stack<int> Lake_right;
	queue<int> Lake;
	int depth = 0,A=0,i=0,last=0,n=0,k=0;
	double S=0;
	string str;

	getline(cin,str);
	n = str.length();

	while(i != n)
	{
		if (str[i] == '\\')
		{
			S += 0.5 + depth;
			depth++;

		}else if (S != 0 && str[i] == '/')
		{
			depth--;
			S += 0.5 + depth;
		}else if (S != 0 && str[i] == '_')
		{
			S += depth;
		}

		if (S != 0 && depth == 0 )
		{
			Lake.push((int)S);
			A += (int)S;
			S = 0;
			last = i;
			k++;
		}

		i++;
	}

	S = 0;
	depth = 0;

	i = n-1;

	while(i != last-1)
	{
		if (str[i] == '/')
		{
			S += 0.5 + depth;
			depth++;

		}else if (S != 0 && str[i] == '\\')
		{
			depth--;
			S += 0.5 + depth;
		}else if (S != 0 && str[i] == '_')
		{
			S += depth;
		}

		if (S != 0 && depth == 0 )
		{
			Lake_right.push((int)S);
			A += (int)S;
			S = 0;
			k++;
		}

		i--;
	}

	while(!Lake_right.empty())
	{
		Lake.push(Lake_right.top());
		Lake_right.pop();
	}

	printf("%d\n", A);
	printf("%d", k);

	while(!Lake.empty())
	{
		printf(" %d", Lake.front());
		Lake.pop();
	}

	printf("\n");

	return 0;
}
	