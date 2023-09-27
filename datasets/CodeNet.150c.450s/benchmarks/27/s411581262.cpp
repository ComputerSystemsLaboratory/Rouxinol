#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct node
{
	int key;
	node* lc, * rc, * p;
};

node* root = NULL;

void insert(int x)
{
	node* pre = root;
	node* prep = NULL;

	node* in = (node*)malloc(sizeof(node));
	in->key = x;
	in->lc = NULL;
	in->rc = NULL;

	while (pre != NULL)
	{
		prep = pre;
		if (in->key < pre->key)
			pre = pre->lc;
		else
			pre = pre->rc;
	}

	in->p = prep;

	if (prep == NULL)
		root = in;
	else
	{
		if (in->key < prep->key)
			prep->lc = in;
		else
			prep->rc = in;
	}
}

void Inorder(node* r)
{
	if (r->lc != NULL)
		Inorder(r->lc);

	cout << " " << r->key;

	if (r->rc != NULL)
		Inorder(r->rc);
}

void Preorder(node* r)
{
	cout << " " << r->key;

	if (r->lc != NULL)
		Preorder(r->lc);
	if (r->rc != NULL)
		Preorder(r->rc);
}

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);

	int n, x;
	string p;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;

		if (p == "insert")
		{
			cin >> x;
			insert(x);
		}
		else
		{
			Inorder(root);
			cout << endl;
			Preorder(root);
			cout << endl;
		}
	}

	return 0;
}
