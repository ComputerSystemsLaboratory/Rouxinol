#include<cstdio>
#define MAXN 500000
struct node{
	int key;
	node *ch[2],*fa;
};
node tree[MAXN+5];
node *Root,*NIL,*ncnt;
void Init(){
	NIL=&tree[0];
	NIL->fa=NIL->ch[0]=NIL->ch[1]=NIL;
	ncnt=&tree[1];
	Root=NIL;
}
inline node * NewNode(int val){
	node *p=++ncnt;
	p->key=val;
	p->fa=p->ch[0]=p->ch[1]=NIL;
	return p;
}
void Insert(node *&rt,node *fa,int val){
	if(rt==NIL){
		rt=NewNode(val);
		rt->fa=fa;
		return ;
	}
	int d=(val>=rt->key);
	Insert(rt->ch[d],rt,val);
}
void InOrder(node *rt){
	if(rt==NIL)return ;
	InOrder(rt->ch[0]);
	printf(" %d",rt->key);
	InOrder(rt->ch[1]);
}
void PreOrder(node *rt){
	if(rt==NIL)return ;
	printf(" %d",rt->key);
	PreOrder(rt->ch[0]);
	PreOrder(rt->ch[1]);
}
node *Find(node *rt,int val){
	if(rt==NIL)return NIL;
	if(rt->key==val)return rt;
	int d=(val>=rt->key);
	return Find(rt->ch[d],val);
}
int main(){
	int n,x;
	char op[100];
	Init();
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",op);
		if(op[0]=='p')
		{
			InOrder(Root);puts("");
			PreOrder(Root);puts("");
		}
		if(op[0]=='i')
		{
			scanf("%d",&x);
			Insert(Root,NIL,x);
		}
		if(op[0]=='f')
		{
			scanf("%d",&x);
			node *p=Find(Root,x);
			if(p==NIL)puts("no");
			else puts("yes");
		}
		if(op[0]=='d')
		{
			
		}
	}
	return 0;
}