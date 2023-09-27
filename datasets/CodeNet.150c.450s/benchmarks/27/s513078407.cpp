#include<iostream>
#include<string>
using namespace std;

struct Node {
	int key;
    Node *left;
	Node *right;
	Node *parent;
};

Node *root,*NIL;
void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;
   z=new Node;
    
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    
    while (x != NIL) {
        y = x;
        if(z->key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    
    z->parent = y;
    if(y==NIL){
        root = z;
    }else{
        if(z->key < y->key){
            y->left=z;
        }else {
            y->right = z;
        }
    }
}

void Preparse(Node *T) {
	if (T == NIL) return;
	cout << " " << T->key;
	Preparse(T->left);
	Preparse(T->right);
}
void Inparse(Node *T) {
	if (T == NIL) return;
	Inparse(T->left);
	cout << " " <<T->key;
	Inparse(T->right);
}
int main() {
	int n; cin >> n;
	int num;
  string str;
	for (int i = 0; i < n; i++) {
    cin>>str;
    if(str=="insert"){
      cin>>num;
        insert(num);
      }
    else if(str=="print"){
              Inparse(root);
      cout << endl;
      Preparse(root);
      cout << endl;

    }
  }

	return 0;
}

