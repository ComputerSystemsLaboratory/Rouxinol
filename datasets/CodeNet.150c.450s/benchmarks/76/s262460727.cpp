#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;

struct node
{
    int key;
    node *parent,*left,*right;
    node():key(-1),parent(NULL),left(NULL),right(NULL) {}
};
node *root,*nil;

node* newnode()
{
    return new node();
}

void insert(int num)
{
    node* x=root;
    node* y=nil;
    node* z=newnode();
    z->key=num;
    while(x!=nil)
    {
        y=x;
        if(num>=x->key)
            x=x->right;
        else
            x=x->left;
    }
    if(y==nil) root=z;
    else
    {
    	z->parent=y;
    	if(num<y->key)
    	  y->left=z;
    	else
    	  y->right=z;
	}
}

bool find(node* u,int num)
{
	if(u->key==num) return true;
	else if(u->key<num&&u->right!=nil) return find(u->right,num);
	else if(u->key>num&&u->left!=nil) return find(u->left,num); 
	return false;
}

void inorder(node* u)
{
	if(u->left!=nil) inorder(u->left);
	printf(" %d",u->key);
	if(u->right!=nil) inorder(u->right);
	return; 
}

void preorder(node* u)
{
	printf(" %d",u->key);
	if(u->left!=nil) preorder(u->left);
	if(u->right!=nil) preorder(u->right);
	return;
}

int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; ++i)
    {
        char s[11];
        scanf("%s",s);
        if(s[0]=='i')
        {
            int x;
            scanf("%d",&x);
            insert(x);
        }
        else if(s[0]=='f')
        {
            int x;
            scanf("%d",&x);
            if(find(root,x))
              printf("yes\n");
            else
              printf("no\n");
        }
        else if(s[0]=='p')
        {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
    return 0;
}