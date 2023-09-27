#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<ctype.h>
#include<stack>
#include<math.h>
#include <string>
#include<algorithm>
#include<iomanip>
#define _for(i,a,b) for(int i = (a);i < (b);i++)
#define mset(x) memset(x,0,sizeof(x));
using namespace std;
#define len 100005
typedef struct pp{
	char name[100];
	int t;
}p;
p Q[len];
int head,tail,n;
void enqueue(p x)
{
	Q[tail] = x;
	tail = (tail + 1 )% len;
 } 
 p dequeue()
 {
 	p x = Q[head];
 	head = (head + 1)%len;
 	return x;
 }
int main() {
	int total = 0,c;
	int i,q;
	p u;
	cin>>n>>q;
	for(i = 1; i <= n;i++)
	{
		cin>>Q[i].name>>Q[i].t;
		}	
		head = 1; tail = n + 1;
		while(head != tail)
		{
			u = dequeue();
			c = min(q,u.t);
			u.t -= c;
			total += c;
			if(u.t > 0)
			enqueue(u);
			else
			cout<<u.name<<" "<<total<<endl;			
		}
	return 0;
}
