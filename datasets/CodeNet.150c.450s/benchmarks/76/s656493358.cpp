#include <iostream>
using namespace std;
class node
{
public:
	int key;
	node *p;
	node *l;
	node *r;
};

node *NIL,*root;

void insert(int v)
{
	node *y=NIL,*x=root,*z=new node;
	z->key=v;z->l=z->r=NIL;
	while(x!=NIL)
	{
		y=x;
		if(z->key<x->key)x=x->l;
		else x=x->r;
	}
	z->p=y;
	if(y==NIL)root=z;
	else if(z->key<y->key)y->l=z;
	else y->r=z;
	return;
}

node* find(int k)
{
	node *x=root;
	while(x!=NIL&&k!=x->key)
	{
		if(k<x->key)x=x->l;
		else x=x->r;
	}
	return x;
}

node* next(node *z)
{
	node *x,*y;
	if(z->r!=NIL)
	{
		x=z->r;
		while(x->l!=NIL)x=x->l;
		return x;
	}
	
	y=z->p;
	while(y!=NIL&&x==y->r)
	{
		x=y;
		y=y->p;
	}
	return y;
}

void del(node *z)
{
	node *y,*x;
	if(z->l==NIL||z->r==NIL)y=z;
	else y=next(z);
	
	if(y->l!=NIL)x=y->l;
	else x=y->r;
	
	if(x!=NIL)x->p=y->p;
	
	if(y->p==NIL)root=x;
	else if(y==y->p->l)y->p->l=x;
	else y->p->r=x;
	
	if(y!=z)z->key=y->key;
	delete(y);
	return;
}

void ino(node *u)
{
	if(u==NIL)return;
	ino(u->l);
	cout<<" "<<u->key;
	ino(u->r);
	return;
}

void preo(node *u)
{
	if(u==NIL)return;
	cout<<" "<<u->key;
	preo(u->l);
	preo(u->r);
	return;
}

void print()
{
	ino(root);
	cout<<endl;
	preo(root);
	cout<<endl;
	return;
}

int main() {
	int n;cin>>n;
	string s;node *a;
	while(cin>>s)
	{
		if(s=="insert")
		{
			cin>>n;
			insert(n);
		}
		else if(s=="find")
		{
			cin>>n;
			a=find(n);
			if(a!=NIL)cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
		else if(s=="delete")
		{
			cin>>n;
			del(find(n));
		}
		else if(s=="print")print();
	}
	return 0;
}