#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#define INF 40
using namespace std;

int ball[12];
int flag ;
stack<int> A, B;


void dfs(int s)
{
	if (s >= 10)
	{
		flag = 1;
		return;
	}
	else if (ball[s] < A.top() && ball[s] < B.top())
	{
		return;
	}
	else {
		if (ball[s] > A.top())
		{
			A.push(ball[s]);
			dfs(s+1);
			A.pop();
		}
		if (ball[s] > B.top())
		{
			B.push(ball[s]);
			dfs(s+1);
			B.pop();
		}
	}
}


int main()
{
	int n;
	while (~scanf("%d",&n))
	{
		while (n--)
		{
			flag = 0;
			while (!A.empty())
			{
				A.pop();
			} 
			while (!B.empty())
			{
				B.pop();
			}
			A.push(0);
			B.push(0);
			memset(ball, 0, sizeof(ball));
			for (int i = 0;i < 10;i++)
			{
				scanf("%d", &ball[i]);
			}
			dfs(0);
			if (flag) printf("YES\n");
			else printf("NO\n");
		}
	}
	return 0;
}