# include <iostream>
# include <string>
using namespace std;
struct Tree
{
	int val;
	Tree *left,*right;
};
void Insert(Tree *&root,Tree *x)
{
	if(root == NULL)
	{
		root = x;
		return;
	}
	if(root->val > x->val)
	{
		if(root->left == NULL) root->left = x;
		else Insert(root->left,x); 
	}
	else
	{
		if(root->right == NULL) root->right = x;
		else Insert(root->right,x);
	}
}
void Pre_Print(Tree *root)
{
	if(root != NULL) cout<<" "<<root->val;
	if(root->left != NULL)Pre_Print(root->left);
	if(root->right != NULL)Pre_Print(root->right);
}
void In_Order(Tree *root)
{
	if(root->left != NULL) In_Order(root->left);
	if(root != NULL) cout<<" "<<root->val;
	if(root->right != NULL) In_Order(root->right);
	
}
int main(void)
{
	int n,k; string m;
	Tree *root,*x;
	root = NULL;
	cin>>n;
	while(n--)
	{
		cin>>m;
		if(m == "insert")
		{
			cin>>k;
			x = new Tree; x->val = k;
			x->left = NULL; x->right = NULL;
			Insert(root,x);
		}
		else
		{
			In_Order(root); cout<<endl;
			Pre_Print(root); cout<<endl;
		}
	}
	return 0;
}
