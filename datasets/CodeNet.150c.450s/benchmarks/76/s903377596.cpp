#include<cstdio>
#include<cstdlib>

struct Node
{
	int key;
	Node *left;
	Node *right;
	Node *parent;
};

Node *root;
Node *NIL;

Node * find(Node *u, int key)
{
	while (u != NIL && u->key != key)
	{
		if (key < u->key)u = u->left;
		else u = u->right;
	}
	return u;
}

void insert(int key)
{
	// 挿入ノードの生成
	Node *z = (Node*)malloc(sizeof(Node));
	z->key = key;
	z->left = NIL;
	z->right = NIL;

	// 挿入位置の親を探す
	Node *y = NIL;	// 挿入位置の親
	Node *x = root; // 挿入位置
	while (x != NIL)
	{
		y = x;
		if (z->key < x->key)
		{
			x = x->left;
		}
		else
		{
			x = x->right;
		}
	}

	// 挿入の実行
	z->parent = y;
	if (y == NIL)
	{
		root = z;
	}
	else
	{
		if (z->key < y->key)
		{
			y->left = z;
		}
		else
		{
			y->right = z;
		}
	}
}

void inorder(Node *u)
{
	if (u == NIL) return;
	inorder(u->left);
	printf(" %d", u->key);
	inorder(u->right);
}

void preorder(Node *u)
{
	if (u == NIL) return;
	printf(" %d", u->key);
	preorder(u->left);
	preorder(u->right);
}

int main()
{
	int n;
	scanf("%d", &n);

	int key;
	char com[10];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", com);
		if (com[0] == 'i')
		{
			scanf("%d", &key);
			insert(key);
		}
		if (com[0] == 'p')
		{
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
		if (com[0] == 'f')
		{
		   	scanf("%d", &key);
			if (find(root, key) != NIL)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
	return 0;
}

/*
「ALDS1_8_A_BinarySearchTree1」の main関数

int main()
{
	int n;
	scanf("%d", &n);

	int key;
	char com[10];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", com);
		if (com[0] == 'i')
		{
			scanf("%d", &key);
			insert(key);
		}
		if (com[0] == 'p')
		{
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}
	return 0;
}
*/
