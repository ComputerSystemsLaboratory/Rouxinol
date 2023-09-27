#include<iostream>
#define MAXN 2048
using namespace std;
int tot;
int n;
struct ST{
	int l,r,num;
}tree[MAXN];
void s(int i){
	tot++;
	if (tree[i].l != -1) s(tree[i].l);
	if (tree[i].r != -1) s(tree[i].r);
}
void s1(int i){
	cout<<" "<<i;
	if (tree[i].l != -1) s1(tree[i].l);
	if (tree[i].r != -1) s1(tree[i].r);
}

void s2(int i){
	if (tree[i].l != -1) s2(tree[i].l);
	cout<<" "<<i;
	if (tree[i].r != -1) s2(tree[i].r);
}

void s3(int i){
	if (tree[i].l != -1) s3(tree[i].l);
	if (tree[i].r != -1) s3(tree[i].r);
	cout<<" "<<i;
}

int f;
int main(){
	int i,a;
	cin>>n;
	for (i = 0;i <= n;++i){
		tree[i].l=tree[i].r=-1;
	}
	
	//cin>>tree[0].num>>tree[0].l>>tree[0].r;
	for (i = 0;i < n;++i){
		cin>>a;
		cin>>tree[a].l>>tree[a].r;
	}
	for (i = 0;i < n;++i){
		tot=0;
		s(i);
		if (tot == n) {
			f=i;
			break;
		}
	}
	cout<<"Preorder\n";
	s1(f);
	cout<<"\n";
	cout<<"Inorder\n";
	s2(f);
	cout<<"\n";
	cout<<"Postorder\n";
	s3(f);
	cout<<"\n";
	return 0;
}