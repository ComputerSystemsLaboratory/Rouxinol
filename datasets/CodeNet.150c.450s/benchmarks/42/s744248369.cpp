#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <string>
#include <vector>
#include <limits.h>
#include <stack>
#include <queue>
#define maxn 10000000
#define pi acos(-1)
using namespace std;
struct node{
char x[17];
int time;	
}a[100007];
int main()
{
	queue<node>qu;
	int t,n;
	cin>>n>>t;
	int tt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].time;
		qu.push(a[i]);
	}
	while (!qu.empty()) {
		node x=qu.front();
		qu.pop();
		if(x.time-t<=0)
		{
			tt+=x.time;
			cout<<x.x<<" "<<tt<<endl;
		}
		else
		{
			tt+=t;
			x.time-=t;
			qu.push(x);
		}
	}
	return 0;
}

