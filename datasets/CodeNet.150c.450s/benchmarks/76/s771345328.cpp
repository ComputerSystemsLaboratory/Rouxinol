#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<ctime>
#define MAXN 500000
struct node
{
	int key;
	node *ch[2];
};
node tree[MAXN+5];
node *Root,*NIL,*ncnt;
//bool first=true;
void Init()
{
	NIL=&tree[0];
	ncnt=&tree[1];
	Root=NIL;
}
inline node *NewNode(int val)
{
	node *p=++ncnt;
	p->key=val;
	p->ch[0]=p->ch[1]=NIL;
	return p;
}
void Insert(node *&rt,int val)
{
	if(rt==NIL)
	{
		rt=NewNode(val);
		return;
	}
	int d=(val>=rt->key);
	Insert(rt->ch[d],val);
}
void PreOrder(node *&rt)
{
	if(rt==NIL)
		return;
//	if(first==true)
//		printf("%d",rt->key),first=false;
//	else
		printf(" %d",rt->key);
	PreOrder(rt->ch[0]);
	PreOrder(rt->ch[1]);
}
void InOrder(node *&rt)
{
	if(rt==NIL)
		return;
	InOrder(rt->ch[0]);
//	if(first==true)
//		printf("%d",rt->key),first=false;
//	else
		printf(" %d",rt->key);
	InOrder(rt->ch[1]);
}
node *Find(node *rt,int val)
{
	if(rt==NIL)
		return NIL;
	if(rt->key==val)
		return rt;
	int d=(val>rt->key);
	return Find(rt->ch[d],val);
}
int main()
{
	Init();
	int n,x;
	char op[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",op);
		if(op[0]=='i')
			scanf("%d",&x),Insert(Root,x);
		else if(op[0]=='p')
		{
			InOrder(Root);
			printf("\n");
			PreOrder(Root);
			printf("\n");
		}
		else if(op[0]=='f')
		{
			scanf("%d",&x);
			if(Find(Root,x)==NIL)
				printf("no\n");
			else
				printf("yes\n");
		}
	}
	return 0;
}