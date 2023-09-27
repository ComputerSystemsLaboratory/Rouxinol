#include <iostream>

using namespace std;

struct Node{
    int key;
    Node *p, *l, *r;
};

Node *root, *NIL;

void Insert(int key){
    Node *x, *y, *z;

    z = new Node;
    z->key = key;
    z->l = NIL;
    z->r = NIL;

    x = root;
    y = NIL;

    while(x!=NIL){
        y = x;
        if(x->key>z->key){
            x = x->l;
        }
        else{
            x = x->r;
        }
    }

    if(y==NIL) {root = z;}
    else if(y->key>z->key) {y->l = z;}
    else if(y->key<=z->key) {y->r = z;}
}

void PreOrder(Node *nk){
    if(nk==NIL) return;
    //cout << nk->key << " ";
    cout << " " << nk->key;
    PreOrder(nk->l);
    PreOrder(nk->r);
}

void InOrder(Node *nk){
    if(nk==NIL) return;
    InOrder(nk->l);
    //cout << nk->key << " ";
    cout << " " << nk->key;
    InOrder(nk->r);
}

int main(){
    int n, num;
    string cmd;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> cmd;
        if(cmd[0]=='i'){
            cin >> num;
            Insert(num);
        }
        else{
            InOrder(root);
            cout << endl;
            PreOrder(root);
            cout << endl;
        }
    }
    return 0;
}


