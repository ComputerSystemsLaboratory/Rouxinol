#include <bits/stdc++.h>

using namespace std;

struct node {
	int key;
	node *parent, *right,*left;
};

node *root, *NIL;

void insert(int n) {
	node *y = NIL;						//今の親；とりあえずNIL
	node *x = root;						//今の位置,とりあえずroot
	node *z;							//挿入される節

//	z = (node *)malloc(sizeof(node));	//挿入節の領域確保
	z = new node;						//これでもいいじゃん

	z->key = n;							//keyは入力値
	z->left = NIL;						//left,rightは葉なのでNIL
	z->right = NIL;

	while (x != NIL) {					//なにも無い位置まで行く
		y = x;							//後で下に行くので親を自分にしておく
		if (z->key < x->key) {			//値が小さければ左に行く
			x = x->left;
		}
		else {
			x = x->right;
		}
	}

	z->parent = y;						//場所が分かったので親を設定						
	if (y == NIL) {						//親がなければｚは根
		root = z;
	}
	else {
		if (z->key < y->key) {			//親がいたら親のどっちに自分がいるか設定
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
}

void find(int n) {
	node *x = root;
	if (x == NIL) { cout << "no" << endl; return; }
	while (x != NIL) {
		if (x->key == n) { cout << "yes" << endl; return; }
		else if (x->key > n) { x = x->left; }
		else { x = x->right; }
	}
	cout << "no" << endl;
}

void inorder(node *x) {
	if (x==NIL) {
		return;
	}

	inorder(x->left);
	cout << " " << x->key;
	inorder(x->right);

}

void preorder(node *x) {
	if (x == NIL) {
		return;
	}

	cout << " " << x->key;

	preorder(x->left);
	preorder(x->right);

}

void pr() {
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;

}

int main() {

	int m;
	cin >> m;
	string str;
	int n;
	for (int i = 0; i < m; i++) {
		cin >> str;
		if (str == "insert") {
			cin >> n;
			insert(n);
		}
		else if (str == "find") {
			cin >> n;
			find(n);
		}
		else if(str=="print"){
			pr();
		}
	}
}
