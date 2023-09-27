#include <iostream>
using namespace std;

struct Node{
	Node(){
		parent = -1;
		left = -1;
		right = -1;
	}
	int parent;
	int left;
	int right;
};

void set_node(Node Tree[], int id, int l, int r)
{
	int deg = 0;
	if (l != -1)  //左小孩 
	{
		Tree[l].parent = id;
	}
	if (r != -1) //右小孩 
	{
		Tree[r].parent = id;
	}
	
	//自己 
	Tree[id].left = l;
	Tree[id].right = r;
}

//輸出 
void Print_Preorder(Node Tree[], int root)
{
	//root -> left subtree -> right subtree
	cout << " " << root;
	
	if (Tree[root].left != -1)
	{
		Print_Preorder(Tree, Tree[root].left);
	}
	
	if (Tree[root].right != -1)
	{
		Print_Preorder(Tree, Tree[root].right);
	}
}

void Print_Inorder(Node Tree[], int root)
{
	//left subtree -> root -> right subtree
	if (Tree[root].left != -1)
	{
		Print_Inorder(Tree, Tree[root].left);
	}
	
	cout << " " << root;
	
	if (Tree[root].right != -1)
	{
		Print_Inorder(Tree, Tree[root].right);
	}
}

void Print_Postorder(Node Tree[], int root)
{
	//left subtree -> right subtree -> root
	if (Tree[root].left != -1)
	{
		Print_Postorder(Tree, Tree[root].left);
	}
	
	if (Tree[root].right != -1)
	{
		Print_Postorder(Tree, Tree[root].right);
	}
	
	cout << " " << root;
}

int find_root(Node Tree[], int n)
{
	for (int i = 0;i < n;i++)
	{
		if (Tree[i].parent == -1)
		{
			return i;
		}
	}
}

int main ()
{
	int n;
	cin >> n;
	Node *B_Tree = new Node [n];
	
	for (int i = 0;i < n;i++)
	{
		int id, left, right;
		cin >> id >> left >> right;
		
		set_node(B_Tree, id, left, right);
	}
	
	int root = find_root(B_Tree, n);
	
	cout << "Preorder" << endl;
	Print_Preorder(B_Tree, root);
	cout << endl;
	
	cout << "Inorder" << endl;
	Print_Inorder(B_Tree, root);
	cout << endl;
	
	cout << "Postorder" << endl;
	Print_Postorder(B_Tree, root);
	cout << endl;
	
	return 0;
 } 
