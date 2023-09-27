//二叉搜索树的插入 
#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
	int key;
	node *p,*l,*r;
};
node *root,*nil;
void Insert(int key)
{
	node *tt=(node*)malloc(sizeof(node));
	tt->key=key;
	tt->l=nil;
	tt->r=nil;
	node *t=root;   //  x
	node *y=nil; 
	while(t!=nil)
	{
		y=t;
		if(tt->key<t->key)
			t=t->l;
		else
			t=t->r;
	}
	tt->p=y;
	if(y==nil)
		root=tt;
	else
	{
		if(tt->key<y->key)
		{
			y->l=tt;
		}
		else
			y->r=tt;
	}
}

void Preorder(node* u)
{
	if(u==nil)
		return;
	cout<<" "<<u->key;
	Preorder(u->l);
	Preorder(u->r);
}

void Inorder(node* u)
{
	if(u==nil)
		return;
	Inorder(u->l);
	cout<<" "<<u->key;
	Inorder(u->r); 
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s[0]=='i')
		{
			int num;
			cin>>num;
			Insert(num);
		}
		else{
			Inorder(root);
			cout<<endl;
			Preorder(root);
			cout<<endl;
		}	
	} 
	return 0;
}
