#include<iostream>
using namespace std;

int nil=-1;

struct Node{
	int p,l,r;
};
//pはparent,lはleftchild,rはrightchild

Node T[10000];
int n;

void preParse(int u){
	if(u==nil) return;
	cout<<" "<<u;
	preParse(T[u].l);
	preParse(T[u].r);
}

void inParse(int u){
	if(u==nil) return;
	inParse(T[u].l);
	cout<<" "<<u;
	inParse(T[u].r);
}

void postParse(int u){
	if(u==nil) return;
	postParse(T[u].l);
	postParse(T[u].r);
	cout<<" "<<u;
}

int main(){
	cin>>n;
	int u,l,r,root;
	for(int i=0;i<n;i++) T[i].p=nil;
	for(int i=0;i<n;i++){
		cin>>u>>l>>r;
		T[u].l=l;
		T[u].r=r;
		if(l!=nil) T[l].p=u;
		if(r!=nil) T[r].p=u;
	}
	for(int i=0;i<n;i++) if(T[i].p==nil) root=i;

	cout<<"Preorder"<<endl;
	preParse(root);
	cout<<endl;
	cout<<"Inorder"<<endl;
	inParse(root);
	cout<<endl;
	cout<<"Postorder"<<endl;
	postParse(root);
	cout<<endl;

	return 0;


}

