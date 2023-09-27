#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <queue>
#include <stack>
#include <utility>
#include <queue>
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second

using namespace std;

stack<int> stk;
int input;
int main()
{
	while(scanf("%d",&input)!=EOF)
	{
		if(input==0)
		{
			printf("%d\n",stk.top());
			stk.pop();
		}
		else
		{
			stk.push(input);
		}
	}
	return 0;
}