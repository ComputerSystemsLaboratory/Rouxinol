#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int MAX=30;
struct Node{
	int parent, left ,right,deg;
	Node():parent(-1),left(-1),right(-1),deg(0){}
}T[MAX];
int N;
void preorder(int i){
	printf(" %d",i);
	if(T[i].left!=-1)preorder(T[i].left);
	if(T[i].right!=-1)preorder(T[i].right);
}
void inorder(int i){
	if(T[i].left!=-1)inorder(T[i].left);
	printf(" %d",i);
	if(T[i].right!=-1)inorder(T[i].right);
}
void postorder(int i){
	if(T[i].left!=-1)postorder(T[i].left);
	if(T[i].right!=-1)postorder(T[i].right);
	printf(" %d",i);
}
int main(){
	cin>>N;
	for(int i=0;i<N;i++){
		int id,l,r;
		cin>>id>>l>>r;
		T[id].left=l;
		T[id].right=r;
		if(l!=-1)T[l].parent=id,T[id].deg++;
		if(r!=-1)T[r].parent=id,T[id].deg++;
	}
	int p=0;
	while(T[p].parent!=-1) p=T[p].parent;
	printf("Preorder\n");
	preorder(p);
	printf("\nInorder\n");
	inorder(p);
	printf("\nPostorder\n");
	postorder(p);
	putchar('\n');
	return 0;
}
