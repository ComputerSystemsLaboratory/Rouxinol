#include<iostream>
#include<queue>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	string cmd;
	priority_queue<int> Q; 
	int k;
	while(cin >> cmd && cmd != "end")
	{
		if(cmd == "insert")
		{
			scanf("%d",&k);
			Q.push(k);
		}
		else if(cmd == "extract")
		{
			printf("%d\n",Q.top());
			Q.pop();
		}
	}
	return 0;
}