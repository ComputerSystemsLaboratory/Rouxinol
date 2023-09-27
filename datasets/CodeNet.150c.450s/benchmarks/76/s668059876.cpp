#include<cstdio>
#define N 500005
struct mzls
{
	int key;
	mzls *ch[2];
};
mzls tree[N];
bool f1=1;
mzls *root,*NIL,*ncnt;
inline void Init()
{
	NIL=&tree[0];
	NIL->ch[0]=NIL->ch[1]=NIL;
	ncnt=&tree[1];
	root=NIL;
}
inline mzls *newnode(int ml)
{
	mzls *p=++ncnt;
	p->key=ml;
	p->ch[0]=p->ch[1]=NIL;
	return p;
}
inline void Insert(mzls *&rt,int ml)
{
	if(rt==NIL)
	{
		rt=newnode(ml);
		return;
	}
	int d=(ml>=rt->key);
	Insert(rt->ch[d],ml);
}
inline void InOrder(mzls *rt)
{
	if(rt==NIL)
		return;
	InOrder(rt->ch[0]);
	printf(" %d",rt->key);
	InOrder(rt->ch[1]);
}
inline void Preorder(mzls *rt)
{
	if(rt==NIL)
		return;
	printf(" %d",rt->key);
	Preorder(rt->ch[0]);
	Preorder(rt->ch[1]);
}
inline mzls *Find(mzls *rt, int ml) 
{
	if(rt==NIL) return NIL;
	if(rt->key==ml) return rt;
	int d=(ml>=rt->key);
	return Find(rt->ch[d],ml);
}
int main()
{
	int n,x;
	char op[100];
	Init();
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",op);
		if(op[0]=='i')
		{
			scanf("%d",&x);
			Insert(root,x);
		}
		else if(op[0]=='f') 
		{
			scanf("%d", &x);
			mzls *p=Find(root, x);
			if(p==NIL)
				puts("no");
			else
				puts("yes");
		}
		else
		{
			InOrder(root);
			puts("");
			Preorder(root);
			puts("");
		}
	}
	return 0;
}