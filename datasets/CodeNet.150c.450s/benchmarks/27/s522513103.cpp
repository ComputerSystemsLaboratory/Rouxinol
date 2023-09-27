#include<cstdio>
#include<cstdlib>

struct Node{
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k)
{
	Node *y = NIL;
	Node *x = root;
	Node *z;

	z = (Node *)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	while(x != NIL)
	{
		y = x;
		if(z->key < x->key)
			x = x->left;
		else
			x = x->right;
	}

	z->parent = y;
	if(y == NIL)
		root = z;
	else{
		if(z->key > y->key)
			y->right = z;
		else
			y->left = z;
	}
}

void Inorder(Node *u)
{
	if(u == NIL) return;
	Inorder(u->left);
	printf(" %d", u->key);
	Inorder(u->right);
}

void Preorder(Node *u)
{
	if(u == NIL) return;
	printf(" %d", u->key);
	Preorder(u->left);
	Preorder(u->right);
}

int main()
{
	int n;
	char s[10];
	int x;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%s", s);
		if(s[0] == 'i')
		{
			scanf("%d", &x);
			insert(x);
		}
		else
		{
			Inorder(root);
			printf("\n");
			Preorder(root);
			printf("\n");
		}
	}

	return 0;

}
