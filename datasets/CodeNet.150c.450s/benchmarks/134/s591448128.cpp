#include <stdio.h>
#define NIL -1
struct node{
	int p,l,r;
}tree[30];
void preorder(int u){
	if(u==NIL)return;
	printf(" %d",u);
	preorder(tree[u].l);
	preorder(tree[u].r);
}
void inorder(int u){
	if(u==NIL)return;
	inorder(tree[u].l);
	printf(" %d",u);
	inorder(tree[u].r);
}
void postorder(int u){
	if(u==NIL)return;
	postorder(tree[u].l);
	postorder(tree[u].r);
	printf(" %d",u);
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i)tree[i].p = tree[i].l = tree[i].r = NIL;
	
	for(int i=0;i<n;++i){
		int pa,lc,rc;
		scanf("%d %d %d",&pa,&lc,&rc);
		tree[pa].l = lc;
		tree[pa].r = rc;
		if(lc!=NIL)tree[lc].p = pa;
		if(rc!=NIL)tree[rc].p = pa;
	}
	int root;
	for(int i=0;i<n;++i)if(tree[i].p==NIL){root=i;break;}
	
	printf("Preorder\n");
	preorder(root);
	printf("\n");
	
	printf("Inorder\n");
	inorder(root);
	printf("\n");
	
	printf("Postorder\n");
	postorder(root);
	printf("\n");
	return 0;
}