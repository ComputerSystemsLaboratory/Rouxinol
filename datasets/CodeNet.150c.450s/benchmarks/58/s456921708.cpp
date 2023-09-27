#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const int MAXSIZ = 100;
int S[MAXSIZ];
int top=0;


void push(int x)
{
	S[++top] = x;
}

int pop()
{
	top--;
	return S[top+1];
}

int main()
{
	int a,b,k;
	char c[MAXSIZ];
	while(cin >> c){
		if(c[0] == '+'){
			a = pop();
			b = pop();
			push(a+b);

		}else if(c[0] == '-'){
			a = pop();
			b = pop();
			push(b-a);
		}else if(c[0] == '*'){
			a = pop();
			b = pop();
			push(a*b);
		}else{
			std::istringstream is(c);
			is >> k;
			push(k);	
		}
	}
	cout << pop() << endl;
	return 0;
}