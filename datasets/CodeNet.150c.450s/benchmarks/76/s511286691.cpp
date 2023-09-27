# include <iostream>
# include <string>
using namespace std;
/* Author: Shirai Kuroko
Bolg URL:www.kuroko.fun
OJ source : ALDS1_8_A&B&C */
struct Tree
{
	int val;
	Tree *left,*right,*dad;
};
bool f = false; // 根节点是否存在 
void Insert(Tree *&root,Tree *x)
{
	if(!f)
	{
		root = x;
		f = true;
		return;
	}
	if(root->val > x->val)
	{
		if(root->left == NULL)
		{
			root->left = x;
			x->dad = root;
		}
		else Insert(root->left,x); 
	}
	else
	{
		if(root->right == NULL)
		{
			root->right = x;
			x->dad = root;
		}
		else Insert(root->right,x);
	}
}

bool Search(Tree *root,int x)
{
	if(!f) return false;
	bool ans;
	if(root == NULL) return false;
	if(root->val == x) return true;
	if(root->val > x) ans = Search(root->left,x);
	else ans = Search(root->right,x);
	return ans;
} 
Tree* Search_Back(Tree* root,int x)
{
	while(root->val != x)
	{
		if(root->val  < x) root = root->right;
		else root = root->left;
	}
	return root;
}
void Delete(Tree *&root,Tree *&x)
{
	if(x->left == NULL && x->right == NULL)
	{
		if(root == x) 
		{
			f = false;
		}
		else
		{
			if(x->dad->left == x) x->dad->left = NULL;
			else x->dad->right = NULL;
		}
	}
	else if(x->left == NULL && x->right != NULL)
	{
		if(root == x) 
		{
			root = root->right;
			root->dad = NULL;
		}
		else
		{
			if(x->dad->left == x) x->dad->left = x->right;
			else x->dad->right = x->right;
			x->right->dad = x->dad;
		}
	}
	else if(x->left != NULL && x->right == NULL)
	{
		if(root == x)
		{
			root = root->left;
			root->dad = NULL;
		}
		else
		{
			if(x->dad->left == x) x->dad->left = x->left;
			else x->dad->right = x->left;
			x->left->dad = x->dad;
		}
	}
	delete x;
}

void Pre_Print(Tree *root)
{
	if(!f) return ;
	if(root != NULL) cout<<" "<<root->val;
	if(root->left != NULL)Pre_Print(root->left);
	if(root->right != NULL)Pre_Print(root->right);
}

void In_Order(Tree *root)
{
	if(!f) return;
	if(root->left != NULL) In_Order(root->left);
	if(root != NULL) cout<<" "<<root->val;
	if(root->right != NULL) In_Order(root->right);
}

void Post_Print(Tree *root)
{
	if(!f) return ;
	if(root->left != NULL) Post_Print(root->left);
	if(root->right != NULL) Post_Print(root->right);
	if(root != NULL) cout<<" "<<root->val; 
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
			x = new Tree; x->val = k; x->dad = NULL;
			x->left = NULL; x->right = NULL;
			Insert(root,x);
		}
		else if(m == "find")
		{
			cin>>k;
			cout<<(Search(root,k)?"yes":"no")<<endl;
		}
		else if(m == "delete")
		{
			cin>>k;
			if(!Search(root,k)) cout<<"The operation is failed, for the tree has not this key"<<endl;
			else
			{
				x = Search_Back(root,k);
				Delete(root,x);
			}
		}
		else
		{
			In_Order(root); cout<<endl;
			Pre_Print(root); cout<<endl;
		}
	}
	return 0;
}
