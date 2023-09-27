#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;


struct node {
	node *prnt, *left, *right;
	int key;
};
int n;
node *nil = NULL, *root = NULL;


void Init() {
	nil = (node *)malloc(sizeof(node));
	nil->left = nil;
	nil->right = nil;
	nil->prnt = nil;

}

void preWark(node *me) {

	if (me == NULL) return;
	printf(" %d", me->key);
	preWark(me->left);
	preWark(me->right);
}


void inWark(node *me) {

	if (me == NULL) return;
	inWark(me->left);
	printf(" %d", me->key);
	inWark(me->right);
}



void insert(node *z) {
	node *y = NULL;
	node *x = root;

	while (x != NULL)
	{
		y = x;
		if (z->key < x->key) x = x->left;
		else x = x->right;
	}
	z->prnt = y;

	if (y == NULL) root = z;
	else if (z->key < y->key) y->left = z;
	else y->right = z;

}



int main() {



	int  key, rt;
	string ord;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> ord;

		if (ord[0] == 'i') {
			cin >> key;

			node *nd = new node;
			nd->key = key;
			nd->prnt = nd->left = nd->right = NULL;

			insert(nd);
		}
		else if (ord[0] == 'p') {
			inWark(root);
			printf("\n");
			preWark(root);
			printf("\n");
		}

	}


	return 0;
}


