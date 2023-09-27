#include<cstdio>
const int MAXN = 500000;
struct node{
	int key;
	node *ch[2];
};
node tree[MAXN + 5];
node *Root,*NIL,*ncnt;
void Init() {
	NIL = &tree[0];
	Root = NIL -> ch[0] = NIL -> ch[1] = NIL;
	ncnt  = &tree[1];
}
inline node * NewNode(int val) {
	node *p = (++ncnt);
	p->key = val;
	p->ch[0] = p->ch[1] = NIL;
	return p;
};
void Insert(node *&rt,int val) {
	if( rt == NIL ) {
		rt = NewNode(val);
		return ;
	}
	int d = (val > rt->key);
	Insert(rt->ch[d],val);
}
node * Find(node *rt,int val){
	if( rt == NIL ) return NIL;
	if( rt->key == val ) return rt;
	return Find(rt->ch[val>rt->key],val);
}
void InOrder(node *rt){
	if( rt == NIL ) return ;
	InOrder(rt->ch[0]);
	printf(" %d",rt->key);
	InOrder(rt->ch[1]);
}
void PreOrder(node *rt){
	if( rt == NIL ) return ;
	printf(" %d",rt->key);
	PreOrder(rt->ch[0]);
	PreOrder(rt->ch[1]);
}
char s1[10];
int main()
{
	int n,x;
	Init();
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s1);
		if( s1[0] == 'p' )
		{
			InOrder(Root);
			puts("");
			PreOrder(Root);
			puts("");
		}
		else if( s1[0] == 'i' )
		{
			scanf("%d",&x);
			Insert(Root,x);
		}
		else
		{
			scanf("%d",&x);
			printf("%s\n",Find(Root,x) != NIL ?"yes":"no");
		}
	}
}