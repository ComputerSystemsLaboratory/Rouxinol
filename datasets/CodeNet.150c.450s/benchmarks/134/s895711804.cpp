#include <bits/stdc++.h>
using namespace std;
struct Node{
	int p,l,r;
};
const int maxn=30;
Node a[maxn];
int rt;
void preorder(int x){
	if(x==-1) return;
	cout<<" "<<x;
	preorder(a[x].l);
	preorder(a[x].r);
}
void inorder(int x){
	if(x==-1) return;
	inorder(a[x].l);
	cout<<" "<<x;
	inorder(a[x].r);
}
void postorder(int x){
	if(x==-1) return;
	postorder(a[x].l);
	postorder(a[x].r);
	cout<<" "<<x;
}
void tree_walk(){
	cout<<"Preorder\n";
	preorder(rt);
	cout<<"\nInorder\n";
	inorder(rt);
	cout<<"\nPostorder\n";
	postorder(rt);
	cout<<endl;
	return;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) a[i].p=-1; //初始化父节点 
	for(int i=0;i<n;i++){  //输入 
		int v,l,r;
		cin>>v>>l>>r;
		a[v].l=l;
		a[v].r=r;
		if(l!=-1) a[l].p=v;
		if(r!=-1) a[r].p=v;
	}
	for(int i=0;i<n;i++) if(a[i].p==-1) rt=i; //寻找根结点 
//	rt--;
	
	tree_walk();
	
	return 0;
}
