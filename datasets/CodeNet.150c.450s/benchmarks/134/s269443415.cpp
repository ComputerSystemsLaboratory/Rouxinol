#include <iostream>
using namespace std;
const int NIL=-1;
const int MAXt=10000;

class node
{
public:
	int p;
	int l;
	int r;
};

node T[MAXt];

int treein(int n)
{
	int id,r,l,root;
	for(int i=0;i<n;i++)T[i].p=NIL;
	for(int i=0;i<n;i++)
	{
		cin>>id>>l>>r;
		T[id].l=l;
		if(l!=NIL)T[l].p=id;
		T[id].r=r;
		if(r!=NIL)T[r].p=id;
	}
	for(int i=0;i<n;i++)if(T[i].p==NIL){root=i;break;}
	return root;
}

void preo(int u)//preorder
{
	if(u==NIL)return;
	cout<<" "<<u;
	preo(T[u].l);
	preo(T[u].r);
	return;
}

void ino(int u)//inorder
{
	if(u==NIL)return;
	ino(T[u].l);
	cout<<" "<<u;
	ino(T[u].r);
	return;
}

void posto(int u)//postorder
{
	if(u==NIL)return;
	posto(T[u].l);
	posto(T[u].r);
	cout<<" "<<u;
	return;
}
int main() {
	int n,root;cin>>n;
	root=treein(n);
	cout<<"Preorder"<<endl;
	preo(root);
	cout<<endl;
	cout<<"Inorder"<<endl;
	ino(root);
	cout<<endl;
	cout<<"Postorder"<<endl;
	posto(root);
	cout<<endl;
	return 0;
}