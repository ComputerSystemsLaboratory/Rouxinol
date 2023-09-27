#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<stack>
#include<set>
using namespace std;
typedef long long ll;
typedef pair<int,int>P;

stack<int>S;
char O[10];
int a,b;
int POP()
{
	int t=S.top();
	S.pop();
	return t;
}

int main()
{
	for(;~scanf("%s",O);)
	{
		switch(O[0])
		{
		case '+':b=POP();a=POP();S.push(a+b);break;
		case '-':b=POP();a=POP();S.push(a-b);break;
		case '*':b=POP();a=POP();S.push(a*b);break;
		default:S.push(atoi(O));
		}
	}
	printf("%d\n",S.top());
}