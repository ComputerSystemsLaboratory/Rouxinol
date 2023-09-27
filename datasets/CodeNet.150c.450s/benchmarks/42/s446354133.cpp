#include <stdio.h>
#include <stdlib.h>
#define LEN 100005

typedef struct PP
{
	char name[100];
	int t;
} P;

P Q[LEN];
int head,tail,n;

void enqueue(P x)
{
	Q[tail] = x;
	tail = (tail+1)%LEN;
}
P dequeue()
{
	P x = Q[head];
	head = (head+1)%LEN;
	return x;
}
int main()
{
	int elaps=0;
	int i,q;
	P u;
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++)
	{
		scanf("%s",Q[i].name);
		scanf("%d",&Q[i].t);
	}
	head=0;
	tail=n;
	while(head!=tail)
	{
		u=dequeue();
		if(u.t>q)
		{
			elaps+=q;
			u.t-=q;
			enqueue(u);
		}
		else
		{
			elaps+=u.t;
			printf("%s %d\n",u.name,elaps);
		}
	}
	return 0;
}