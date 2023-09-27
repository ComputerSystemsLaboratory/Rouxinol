#include <bits/stdc++.h>
using namespace std;
struct Node{
	int p,l,r;
} T[25];
void preP(int u){
	if(u==-1) return;
	printf(" %d",u);
	preP(T[u].l);
	preP(T[u].r);
}
void inP(int u){
	if(u==-1) return;
	inP(T[u].l);
	printf(" %d",u);
	inP(T[u].r);
}
void postP(int u){
	if(u==-1) return;
	postP(T[u].l);
	postP(T[u].r);
	printf(" %d",u);
}
int main()
{
	int n,l,r,in; 
	cin>>n;
	for(int i=0;i<n;i++) T[i].p = -1;
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&in,&l,&r);
		T[in].l = l;
		T[in].r = r;
		T[l].p = T[r].p = in;
	}
	int root;
	for(int i=0;i<n;i++)
		if(T[i].p==-1) root = i,i=n;
	printf("Preorder\n");
	preP(root);
	printf("\nInorder\n");
	inP(root);
	printf("\nPostorder\n");
	postP(root);
	cout<<endl;
	return 0;
}

