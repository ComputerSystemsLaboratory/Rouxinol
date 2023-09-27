#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int num[100], top;

int pop();
void push(int x);

int main()
{
	int a, b;
	top = 0;
	string s;
	getline(cin, s);

	for(int j = 0; s[j]!='\0'; j++)
	{
		if(s[j] == ' ') continue;
		else if(s[j] != '+' && s[j] != '-' && s[j] != '*')
		{
			int l = 0;
			num[top] = 0;
			while(s[j]!=' ') { l++; j++;}
			num[top] += atoi(&s[j-l]);
			top++;
		} 
		else
		{
			a = pop();
			b = pop();
			if(s[j] == '+')
				push(b+a);
			else if(s[j]=='-')
				push(b-a);
			else if(s[j] == '*')
				push(a*b);
			top++; 
		}
	}
	cout << num[0] << endl;
	return 0;
}

int pop() { top--; return num[top]; }

void push(int x) { num[top] = x; }