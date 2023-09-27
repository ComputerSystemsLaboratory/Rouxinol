#include <bits/stdc++.h>
#define _CRT_
using namespace std;

int main()
{
	stack<int> S;
	string s;
	while (cin >> s)
	{
		//printf("input:%s.", s.c_str());
		if (s == "+")
		{
			//printf("i got +.\n");
			int right = S.top(); S.pop();
			int left = S.top();	S.pop();
			S.push(right + left);
			continue;
		}
		if (s == "-")
		{
			//printf("i got -.\n");
			int right = S.top(); S.pop();
			int left = S.top();	S.pop();
			S.push(left - right);
			continue;
		}
		if (s == "*")
		{
			//printf("i got *.\n");
			int right = S.top(); S.pop();
			int left = S.top();	S.pop();
			S.push(right * left);
			continue;
		}
		//printf("i got number\n");
		S.push(stoi(s));
	}
	printf("%d\n", S.top());
	return 0;

}