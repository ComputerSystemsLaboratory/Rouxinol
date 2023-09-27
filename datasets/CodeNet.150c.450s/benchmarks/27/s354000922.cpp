
#include <iostream>
#include <string>
#include <malloc.h>


using namespace std;

struct Node {
	int key;
	Node *pa, *le, *ri;
};

Node *root, *NIL;

void insert(int k) {
	Node *y = NIL;
	Node *x = root;
	Node *z;

	z = (Node*)malloc(sizeof(Node));

	z->key = k;
	z->le = NIL;
	z->ri = NIL;

	while (x != NIL) {
		y = x;
		if (z->key < x->key) {
			x = x->le;
		}
		else {
			x = x->ri;
		}
	}

	z->pa = y;

	if (y == NIL) {
		root = z;
	}
	else if(z->key < y->key){
		y->le = z;
	}
	else {
		y->ri = z;
	}
}

void pre(Node *a) {
	if (a == NIL) {
		return;
	}

	int number = a->key;
	
	cout << " " << number;
	pre(a->le);
	pre(a->ri);
}

void ino(Node *a) {
	if (a == NIL) {
		return;
	}

	int number = a->key;

	ino(a->le);
	cout << " " << number;
	ino(a->ri);
}


int main()
{
	int n, num;
	string order;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> order;
		if (order == "insert") {
			cin >> num;
			insert(num);
		}
		else if (order == "print") {
			ino(root);
			cout << endl;
			pre(root);
			cout << endl;
		}
	}

	return 0;
}

