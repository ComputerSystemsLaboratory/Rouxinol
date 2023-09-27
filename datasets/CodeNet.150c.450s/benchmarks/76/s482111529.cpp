#include<iostream>
#include<string>

using namespace std;
struct Node{
    int key;
    Node *parent, *left, *right;
};

Node *root=NULL, *NIL=NULL;

void Preorder(Node *root) {
    if ( root != NIL ) {
    cout << " " << root->key;
    Preorder(root->left);
    Preorder(root->right);
   }
}

void Inorder(Node *root) {
    if ( root != NIL ) {
       Inorder( root->left);
      cout << " " << root->key;
       Inorder( root->right);
     }
}

void Postorder(Node *root) {
    if ( root != NIL ) {
       Postorder( root->left);
       Postorder( root->right);
       cout << " " << root->key;
     }
}
void insert(int key) {
	Node *p=new Node;
	p->key=key;
	p->left=NIL;
	p->right=NIL;

	Node *x = root;
	Node *y = NIL;

	while(x != NIL ){
		y=x;
		if ( p->key > x->key ) x = x->right;
		else x = x->left;

	}
    
    p->parent = y;
    if( y == NIL ) root = p;
    else {
    	if ( p->key > y->key ) y->right = p;
    	else y->left = p;
    }

}

bool find(int key) {
    Node *p = root;
    while ( p != NIL && p->key != key ) {
    	if ( p->key > key ) p = p->left;
    	else p = p->right;
    }
    return p != NIL;
}
int main() {
    int n;
    string op;
    int key;

    cin >> n;
    while ( n-- ) {
    	cin >> op;
    	if ( op == "insert" ) {
    		cin >> key;
    		insert(key);
    	} else if ( op == "print" ){
    		Inorder(root);
    		cout << endl;
    		Preorder(root);
    		cout << endl;
    	} else if ( op == "find" ) {
    		cin>>key;
    		if ( find(key) ) cout << "yes" << endl;
    		else cout << "no" << endl;
    	}
    }
	return 0;
}
