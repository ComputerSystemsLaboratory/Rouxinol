
#include<bits/stdc++.h>

using namespace std;



int main()
{
	priority_queue<int> q;
	char s[20];
	int  n;
	while(scanf("%s",s)!=EOF)
	{
	    if(strcmp(s,"insert")==0)
		{
			scanf("%d",&n);
			q.push(n);
		}
		else if(strcmp(s,"extract")==0)
		{
			printf("%d\n",q.top());
			q.pop();
		}
		else if(strcmp(s,"end")==0) break;
	}
	return 0;
}




