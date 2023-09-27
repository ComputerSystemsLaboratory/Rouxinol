#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
priority_queue<int>Q;
char S[10];
int a;
int main()
{
	for(;scanf("%s",S);)
	{
		if(S[0]=='i')
		{
			scanf("%d\n",&a);
			Q.push(a);
		}
		else if(S[1]=='x')
		{
			a=Q.top();
			printf("%d\n",a);
			Q.pop();
		}
		else
			break;
	}
}