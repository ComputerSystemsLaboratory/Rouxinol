#include <iostream>
using namespace std;
struct node{
	int key;
	node *left = NULL;
	node *right = NULL;
	node(int k, node*l = NULL, node*r = NULL) : key(k), left(l), right(r) {}
};
node *Tree;

void insert(node z)
{
	node *y = NULL;
	node *x = Tree;
	while(x != NULL){
		y = x;
		if(z.key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	if(y == NULL)
		Tree = new node(z.key);
	else if(z.key < y->key)
		y->left = new node(z.key);
	else
		y->right = new node(z.key);
}

void midprint(node *root)
{
	if(root == NULL) return;
	midprint(root->left);
	cout << " " << root->key;
	midprint(root->right);
}

void preprint(node *root)
{
	if(root == NULL) return;
	cout << " " << root->key ;
	preprint(root->left);
	preprint(root->right);
}


void print(node *root)
{
	midprint(root);
	cout << endl;
	preprint(root);
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		if(s[0] == 'i'){
			int k;
			cin >> k;
			node leaf(k);
			insert(leaf);
		}
		else if(s[0] == 'p')
			print(Tree);
	}
	return 0;
}