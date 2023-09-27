#include<cstdio>
#include<iostream>
using namespace std;
#define MAX 100
#define nan -1
struct node{int p,l,r;};
node tree[MAX];
int num;
void print_qian(int root){
cout<<" "<<root;	
if(tree[root].l!=nan)	print_qian(tree[root].l);
if(tree[root].r!=nan)	print_qian(tree[root].r);
return ;
}
void print_zhong(int root){
if(tree[root].l!=nan)	print_zhong(tree[root].l);
cout<<" "<<root;
if(tree[root].r!=nan)	print_zhong(tree[root].r);
return ;
}
void print_hou(int root){
if(tree[root].l!=nan)	print_hou(tree[root].l);
if(tree[root].r!=nan)	print_hou(tree[root].r);
cout<<" "<<root;	
return ;
}
int main(){
	 scanf("%d",&num);
	 for(int i=0;i<num;i++){tree[i].p=tree[i].l=tree[i].r=nan;}
	 for(int i=0;i<num;i++){
	 	int v,l,r;
	 	scanf("%d %d %d",&v,&l,&r);
	 	if(l!=-1){tree[v].l=l;tree[l].p=v;}
	 	if(r!=-1){tree[v].r=r;tree[r].p=v;}
	 }
	 int root;
	 for(int i=0;i<num;i++){
	 	if (tree[i].p==nan) root=i;
	 }
	 cout<<"Preorder"<<endl;
	 print_qian(root);cout<<endl;
	 cout<<"Inorder"<<endl;
	 print_zhong(root);cout<<endl;
	 cout<<"Postorder"<<endl;
	 print_hou(root);cout<<endl;
}

