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
bool find(int key)
{
	node *tt=root;
	while(tt!=nil&&tt->key!=key)
	{
		if(tt->key<key)
			tt=tt->r;
		else
			tt=tt->l;
	}	
	if(tt!=nil)
		return 1;
	else 
		return 0;
		
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
		else if(s[0]=='f')
		{
			int nn;
			cin>>nn;
			if(find(nn))
				cout<<"yes"<<endl;
			else
				cout<<"no"<<endl;
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
