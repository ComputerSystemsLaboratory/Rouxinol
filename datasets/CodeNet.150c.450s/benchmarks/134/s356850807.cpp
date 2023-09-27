#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxx=28;
const int NIL=-1;
struct node{
	int parent,left,right;
};
node tree[maxx];

void print_preorder(int x){
	if(x==NIL) return ;
	printf(" %d",x);
	print_preorder(tree[x].left);
	print_preorder(tree[x].right);
	return ;
}

void print_inorder(int x){
	if(x==NIL) return ;
	print_inorder(tree[x].left);
	printf(" %d",x);
	print_inorder(tree[x].right);
	return ;
}

void print_postorder(int x){
	if(x==NIL) return ;
	print_postorder(tree[x].left);
	print_postorder(tree[x].right);
	printf(" %d",x);
	return ;
}

int main (){
	int n;
	cin>>n;
	for(int i=0;i<maxx;i++) tree[i].parent=tree[i].left=tree[i].right=NIL;
	int a,b,c,root;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		tree[a].left=b;
		tree[a].right=c;
		if(b!=NIL) tree[b].parent=a;
		if(c!=NIL) tree[c].parent=a;
	}
	for(int i=0;i<n;i++){
		if(tree[i].parent==NIL) root=i;
	}
	printf("Preorder\n");
	print_preorder(root);
	printf("\nInorder\n");
	print_inorder(root);
	printf("\nPostorder\n");
	print_postorder(root);
	printf("\n");
	return 0;
}
