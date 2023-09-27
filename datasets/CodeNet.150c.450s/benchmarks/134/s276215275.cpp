#include <iostream>
using namespace std;
 
const int maxn = 50;
 
typedef struct 
{
	int parent;
	int left;
	int right;
}Node;
 
Node T[maxn];
int n;
 
void preorder(int u)
{
	if(u==-1)
		return ;
	cout << " "<<u;
	preorder(T[u].left);
	preorder(T[u].right);
}
 
void inorder(int u)
{
	if(u==-1)
		return ;
	inorder(T[u].left);
	cout << " "<<u;
	inorder(T[u].right);
}
 
void postorder(int u)
{
	if(u==-1)
		return ;
	postorder(T[u].left);
	postorder(T[u].right);
	cout << " "<<u;
}
 
int main ()
{
	int i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		T[i].parent=-1;
		T[i].left=-1;
		T[i].right=-1;
	}
	int id,rchild,lchild;
	for(i=0;i<n;i++)
	{
		cin >> id >> lchild >> rchild;
		T[id].left=lchild;
		T[id].right=rchild;
		if(rchild!=-1)
			T[rchild].parent=id;
		if(lchild!=-1)
			T[lchild].parent=id;
	}
	int root;
	for(i=0;i<n;i++)
	{
		if(T[i].parent==-1)
		{
			root=i;
		}
	}
	cout << "Preorder\n" ;
	preorder(root);
	cout <<"\nInorder\n";
	inorder(root);
	cout << "\nPostorder\n";
	postorder(root);
	cout << endl;
	return 0;
}

