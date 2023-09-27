#include<bits/stdc++.h>

using namespace std;

int main()
{
	priority_queue<int> pq;
	while(true)
	{
		char s[10];
		scanf("%s",s);
		if(s[2]=='s')
		{
			int t;
			scanf("%d",&t);
			pq.push(t);
		}
		else if(s[2]=='t')
		{
			printf("%d\n",pq.top());
			pq.pop();
		}
		else break;
	}
	return 0;
}