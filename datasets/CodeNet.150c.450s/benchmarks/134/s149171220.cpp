#include<iostream>
#include<cstdio>
#define MAX 10000

using namespace std;

struct Node{int parent,left,right;};
Node T[MAX];
int n;

void preorder(int u){
	if(u==-1)
	return;
	printf(" %d",u);
	preorder(T[u].left);
	preorder(T[u].right);
}

void inorder(int u){
	if(u==-1)
	return;
	inorder(T[u].left);
	printf(" %d",u);
	inorder(T[u].right);
}

void postorder(int u){
	if(u==-1)
	return;
	postorder(T[u].left);
	postorder(T[u].right);
	printf(" %d",u);
}

int main(){
	int id,l,r,root;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		T[i].parent=-1;
	}
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&id,&l,&r);
		T[id].left=l;
		T[id].right=r;
		if(l!=-1)
		T[l].parent=id;
		if(r!=-1)
		T[r].parent=id;
	}
	for(int i=0;i<n;i++){
		if(T[i].parent==-1)
		root=i;
	}
	printf("Preorder\n");
	preorder(root);
	printf("\n");
	printf("Inorder\n");
	inorder(root);
	printf("\n");
	printf("Postorder\n");
	postorder(root);
	printf("\n");
}