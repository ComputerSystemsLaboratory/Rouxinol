#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;
int main(void)
{
	int suji;
	stack<int> S;
	while(scanf("%d",&suji)!=EOF)
	{
		if(suji == 0)
		{
			printf("%d\n",S.top());
			S.pop();
		}
		else
		{
			S.push(suji);
		}

	}
	return 0;
}