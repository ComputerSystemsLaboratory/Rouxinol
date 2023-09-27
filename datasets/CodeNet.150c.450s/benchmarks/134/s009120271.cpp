
#define MAXN (25+10)
#include<cstdio>

struct Tree
{
	int l;
	int r;
	int fa;
	Tree():l(-1),r(-1),fa(-1) {}
}tree[MAXN];

void add(Tree &aim,int lef,int rig)
{
	aim.l=lef;
	aim.r=rig;
}
int N;
int origin;

void Preorder(int oper)
{
	printf(" %d",oper);
	if(tree[oper].l!=-1)
		Preorder(tree[oper].l);
	if(tree[oper].r!=-1)
		Preorder(tree[oper].r);
}
void Inorder(int oper)
{
	if(tree[oper].l!=-1)
		Inorder(tree[oper].l);
	printf(" %d",oper);
	if(tree[oper].r!=-1)
		Inorder(tree[oper].r);
}
void Postorder(int oper)
{
	if(tree[oper].l!=-1)
		Postorder(tree[oper].l);
	if(tree[oper].r!=-1)
		Postorder(tree[oper].r);
	printf(" %d",oper);
}
int main()
{
	scanf("%d",&N);
	for(int i=0;i<N;++i)
	{
		int ord,lef,rig;
		scanf("%d%d%d",&ord,&lef,&rig);
		add(tree[ord],lef,rig);
		tree[lef].fa=ord;
		tree[rig].fa=ord;
	}
	for(int i=0;i<N;++i)
		if(tree[i].fa==-1)
		{
			origin=i;
			break;
		}
	printf("Preorder\n");
	Preorder(origin);
	printf("\nInorder\n");
	Inorder(origin);
	printf("\nPostorder\n");
	Postorder(origin);
	printf("\n");
	return 0;
}