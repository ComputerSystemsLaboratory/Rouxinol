#include <stdio.h>

#define Max 10000
#define NIL -1

struct tree{int parent,left,right;};
struct tree T[Max];
int n;

void pre(int u){
	if(u==NIL) return;
	printf(" %d",u);
	pre(T[u].left);
	pre(T[u].right);
}

void mid(int u){
	if(u==NIL) return ;
	mid(T[u].left);
	printf(" %d",u);
	mid(T[u].right);
}

void back(int u){
	if( u == NIL) return;
	back(T[u].left);
	back(T[u].right);
	printf(" %d",u);
}

int main(){
	scanf("%d",&n);
	int i;
	int id,l,r;
	int root;
	for(i=0;i<n;i++) T[i].parent = NIL;
	for(i=0;i<n;i++){
		scanf("%d",&id);
		scanf("%d%d",&l,&r);
		T[id].left = l;
		T[id].right = r;
		if(l != NIL) T[l].parent = id;
		if(r != NIL) T[r].parent = id;
	}

	for(i=0;i<n;i++)if(T[i].parent == NIL) root = i;

	printf("Preorder\n");
	pre(root);
	printf("\n");
	printf("Inorder\n");
	mid(root);
	printf("\n");
	printf("Postorder\n");
	back(root);
	printf("\n");

	return 0;
}