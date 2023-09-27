#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct node {
    int key;
    struct node *left, *right;
    node(int k):key(k),left(NULL),right(NULL){}
};

class bintree {
    node *root;
    bool first;
    void inorder(node *t) {
        if(t) {
            inorder(t->left);
            cout<<' '<<t->key;
            inorder(t->right);
        }
    }
    void preorder(node *t) {
        if(t) {
            cout<<' '<<t->key;
            preorder(t->left);
            preorder(t->right);
        }
    }
    public:
    bintree():root(NULL){}
    void insert(int k)
    {
        node *n = new node(k);
        node *y=NULL;
        node *x=root;
        while(x!=NULL) {
            y=x;
            if(k<x->key) x=x->left;
            else x=x->right;
        }
        if(y==NULL) {
            root=n;
        } else {
            if(k<y->key) y->left=n;
            else y->right=n;
        }
    }
    bool find(int k) {
        node *n=root;
        while(n) {
            if(n->key==k) return true;
            if(k<n->key) n=n->left;
            else n=n->right;
        }
        return false;
    }
    void inorder(){
        inorder(root);
        cout<<'\n';
    }
    void preorder(){
        preorder(root);
        cout<<'\n';
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    bintree t;
    int n;
    string com;
    int key;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>com;
        switch(com[0]) {
        case 'i':
            cin>>key;
            t.insert(key);
            break;
        case 'f':
            cin>>key;
            if(t.find(key)) cout<<"yes\n";
            else cout<<"no\n";
            break;
        case 'p':
            t.inorder();
            t.preorder();
            break;
        }
    }
    return 0;
}