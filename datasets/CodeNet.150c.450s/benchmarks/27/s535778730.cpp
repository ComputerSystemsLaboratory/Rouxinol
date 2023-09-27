#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<queue>
#include<stack>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<cstdlib>
#include<typeinfo>
#include<sstream>
#include<list>
#include<set>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define fori(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
int in()
{
	int x;cin>>x;
	return x;
}
int stringInt(string a)
{
	return atoi(a.c_str());
}
string intString(int a)
{
	stringstream ss;
	ss<<a;
	return ss.str();
}
vector<int> SieveOfEratosthenes(int x)
{
	vector<int> a;
	vector<int> b(x+1,0);
	for(int i=2;i<=x;i++)
	{
		if(b[i]==0)
		{
			a.push_back(i);
			for(int l=i;l<=x;l+=i)
			{
				b[l]=1;
			}
		}
	}
	return a;
}

struct Node
{
	int k;
	Node *p,*r,*l;
};
Node *root,*NIL;

void ins(int k)
{
	Node *y,*x,*z;
	z=(Node*)malloc(sizeof(Node));
	z->k=k;
	z->l=z->r=NIL;
	y=NIL;
	x=root;
	while(x!=NIL)
	{
		y=x;
		if(x->k > k)
		{
			x=x->l;
		}
		else
		{
			x=x->r;
		}
	}
	z->p=y;
	if(y==NIL)
	{
		root=z;
	}
	else if(z->k < y->k)
	{
		y->l=z;
	}
	else
	{
		y->r=z;
	}
	return ;
}
void ino(Node* root)
{
	if(root==NIL)return ;
	ino(root->l);
	cout<<" "<<root->k;
	ino(root->r);
	return ;
}
void pre(Node* root)
{
	if(root==NIL)return ;
	cout<<" "<<root->k;
	pre(root->l);
	pre(root->r);
	return ;
}
bool fin(Node* root,int x)
{
	if(root->k!=x)
	{
		if(root->k>x&&root->l==NIL)return false;
		if(root->k<x&&root->r==NIL)return false;
	}

	if(root->k==x)return true;

	else if(root->k > x)
	{
		return fin(root->l,x);
	}
	else return fin(root->r,x);
	return false;

}
int main()
{
	int n;
	root=NIL;
	cin>>n;
	rep(i,n)
	{
		string a;
		cin>>a;
		switch(a[0])
		{
		case'i':
			int x;
			cin>>x;
			ins(x);
			break;
		case'p':

			ino(root);
			cout<<endl;

			pre(root);
			cout<<endl;
			break;
		case'f':
			if(fin(root,in()))cout<<"yes"<<endl;
			else cout<<"no"<<endl;
			break;
		case'd':
			break;
		}
	}
	return 0;
}