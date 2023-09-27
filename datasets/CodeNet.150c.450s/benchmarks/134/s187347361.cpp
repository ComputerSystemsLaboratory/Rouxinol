#include <cstdio>
#define MAX 10000
#define NIL -1

struct Node{
	int parent,left,right;
};

Node T[MAX];
int n;

void preParse(int u){
	if(u==NIL) return;
	printf(" %d",u);
	preParse(T[u].left);
	preParse(T[u].right);
} 

void inParse(int u){
	if(u==NIL) return;
	inParse(T[u].left);
	printf(" %d",u);
	inParse(T[u].right);
}

void posParse(int u){
	if(u==NIL) return;
	posParse(T[u].left);
	posParse(T[u].right);
	printf(" %d",u);
}

int main() {
	
	int v,l,r,root = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) T[i].parent = NIL;
	
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&v,&l,&r);
		T[v].left=l;
		T[v].right=r;
		if(l != NIL) T[l].parent = v;
		if(r!=NIL) T[r].parent = v;
	}
	
	for(int i=0;i<n;i++) 
		if(T[i].parent == NIL) 
			root = i;
	
	
	printf("Preorder\n");
	preParse(root);
	printf("\n");
	
	printf("Inorder\n");
	inParse(root);
	printf("\n");
	
	printf("Postorder\n");
	posParse(root);
	printf("\n");
	
	
	return 0;
}