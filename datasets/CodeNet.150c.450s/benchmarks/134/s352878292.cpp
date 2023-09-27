#include<iostream>
#include<cstdio>
#define maxn 100005
#define nil -1
using namespace std;
int n,root; 

struct node
{
	int parent;
	int left;
	int right;
	node():parent(nil),left(nil),right(nil){}
};
node t[maxn];

void build()
{
	for(int i=0;i<n;++i)
	{
		int num,l,r;
		scanf("%d%d%d",&num,&l,&r);
		t[num].left=l;
		t[num].right=r;
		if(l!=nil) t[l].parent=num;
		if(r!=nil) t[r].parent=num;
	}
	return;
}

void find_root()
{
	for(int i=0;i<n;++i)
	  if(t[i].parent==nil)
	  {
	  	root=i;
	  	break;
	  }
	return ;
}

void preorder(int num)
{
	printf(" %d",num);
	if(t[num].left!=nil) preorder(t[num].left);
	if(t[num].right!=nil) preorder(t[num].right);
	return ;
}

void inorder(int num)
{
	if(t[num].left!=nil) inorder(t[num].left);
	printf(" %d",num);
	if(t[num].right!=nil) inorder(t[num].right);
	return ;
}

void postorder(int num)
{
	if(t[num].left!=nil) postorder(t[num].left);
	if(t[num].right!=nil) postorder(t[num].right);
	printf(" %d",num);
	return ;
}

int main()
{
//	freopen("out.txt","w",stdout);
	scanf("%d",&n);
	build();
	find_root();
	printf("Preorder\n");
	preorder(root); 
	printf("\nInorder\n");
	inorder(root);
	printf("\nPostorder\n");
	postorder(root);
	printf("\n");
	return 0;
} 