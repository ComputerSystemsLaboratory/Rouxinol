#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct node
{
	int key;
	node* lc, * rc;
};

node* root = 0;

void insert(int x)
{
	node* pre = root;        //设当前节点为根，以根为起点
	node* temp = pre;        //用来保存当前节点的临时指针

	node* in = (node*)malloc(sizeof(node));
	in->key = x;
	in->lc = 0;
	in->rc = 0;

	while (pre != 0)        //找到将要插入的节点的父节点(当前节点)
	{
		temp = pre;
		if (in->key < pre->key)
			pre = pre->lc;
		else
			pre = pre->rc;
	}
	pre = temp;

	if (pre == 0)           //插入
		root = in;
	else
	{
		if (in->key < pre->key)
			pre->lc = in;
		else
			pre->rc = in;
	}
}

bool find(int f)
{
	bool fin = false;

	node* pre = root;
	while (pre != 0)
	{
		if (f < pre->key)
			pre = pre->lc;
		else if (f > pre->key)
			pre = pre->rc;
		else
		{
			fin = true;
			break;
		}
			
	}

	return fin;
}

void Inorder(node* r)
{
	if (r->lc != 0)
		Inorder(r->lc);

	cout << " " << r->key;

	if (r->rc != 0)
		Inorder(r->rc);
}

void Preorder(node * r)
{
	cout << " " << r->key;

	if (r->lc != 0)
		Preorder(r->lc);
	if (r->rc != 0)
		Preorder(r->rc);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

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
		else if (p == "find")
		{
			cin >> x;
			if (find(x))
				cout << "yes\n";
			else
				cout << "no\n";
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
