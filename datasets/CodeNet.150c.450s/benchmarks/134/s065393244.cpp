#include <bits/stdc++.h>
#define MAX 10000
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
struct Node{int p,l,r;};
Node T[MAX];
int D[MAX],H[MAX];
void preorder(int u){
	if(u==-1)return;
	printf(" %d",u);
	preorder(T[u].l);
	preorder(T[u].r);
}
void inorder(int u){
	if(u==-1)return;
	inorder(T[u].l);
	printf(" %d",u);
	inorder(T[u].r);
}
void postrder(int u){
	if(u==-1)return;
	postrder(T[u].l);
	postrder(T[u].r);
	printf(" %d",u);
}
int main(){
    int root,n,a,b,c;
	cin>>n;
	r(i,n)T[i].p=-1;
	r(i,n){
	  cin>>a>>b>>c;
	  T[a].l=b;
	  T[a].r=c;
	  if(b!=-1)T[b].p=a;
	  if(c!=-1)T[c].p=a;
	}
	r(i,n)if(T[i].p==-1)root=i;
	printf("Preorder\n");
	preorder(root);
	cout<<endl;
	printf("Inorder\n");
	inorder(root);
	cout<<endl;
	printf("Postorder\n");
	postrder(root);
	cout<<endl;
}