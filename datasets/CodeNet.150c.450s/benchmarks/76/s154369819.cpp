#include <iostream>
#include<string>
using namespace std;

#define FOR(k,m,n) for(int (k)=(m);(k)<(n);(k)++)
#define REP(i,n) FOR((i),0,(n))
#define LL long long

#define MAX 10000

//-----????¨????-----

//?????????????????±
struct Node {
	int key;
	Node *left, *right, *parent;
};


//-----?????°??£?¨?-----

Node *root, *NIL;

//-----??¢??°??£?¨?-----
//?????????????????????????????¨????????¨???????°????
Node* treeMinimum(Node *x) {
	while(x->left!=NIL)x=x->left;
	return x;
}

//?????????????????????????????¨???????????§?????????????????????????´¢
Node* find(Node* u, int k) {
	//??¨?????????or??????????????????????????§???????????????
	while (u != NIL && k != u->key) {
		if(k< u->key)u=u->left;
		else         u=u->right;
	}
	return u;
}

//?¬??????????????´¢ ???
Node* treeSuccessor(Node *x) {
	//??????????????????????????????????????????????????????
	if(x->right!=NIL)return treeMinimum(x->right);

	//?????????????????????????????´???
	Node* y=x->parent;
	//???????????????????±??????????????????????????????§??????????????????
	while (y != NIL && x == y->right) {
		x=y;
		y=y->parent;
	}
	return y;
}

void treeDelete(Node *z) {
	Node *y;//????????????????±?
	Node *x;//y??????

	//??????????????????????±???????
	if (z->left == NIL || z->right == NIL) y=z;
	else y = treeSuccessor(z);
}

void insert(int k) {

	//?????°??£?¨?
	Node *y = NIL;   //????????¨????????????????????????
	Node *x = root;  //??¢?´¢??????????????????
	Node *z;       //?????\????????????

				   //z??????????¨????
	z = (Node*)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	//?????????????????????????????§???????????????????????¢????????¨???????????????
	while (x != NIL) {
		y = x;
		if (z->key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	//???????¢????
	z->parent = y;

	//???????????????????¢?????????????
	if (y == NIL) {
		root = z;
	}
	else {
		if (z->key < y->key) y->left = z;
		else                 y->right = z;
	}
}

//???????????????
void inorder(Node *u) {
	if (u == NIL) return;
	inorder(u->left);
	cout << " " << u->key;
	inorder(u->right);
}

//???????????????
void preorder(Node *u) {
	if (u == NIL)return;
	cout << " " << u->key;
	preorder(u->left);
	preorder(u->right);
}

//???????????¢??°
int main() {
	int n, x;
	string com;

	//??\???
	cin >> n;
	REP(i, n) {
		cin >> com;
		if (com == "insert") {
			cin >> x;
			insert(x);
		}
		else if (com == "print") {
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
		else if (com == "find") {
			cin>>x;
			Node *t=find(root,x);
			if(t!=NIL)cout<<"yes"<<endl;
			else      cout<<"no"<<endl;
		}
	}
	cin>>n;
	return 0;
}