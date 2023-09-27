#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

#define MAX 100005
#define INF INT_MAX

typedef long long ll;
typedef pair<int, int> P;

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

void preorder(Node u);
void inorder(Node u);

Node root;

Node treeMinimum(Node x)
{
    return NIL;
}
Node treeMaximum(Node x)
{
    return NIL;
}
Node treeSearch(Node u, int k)
{
    Node ret;
    if (u == NIL) return NIL;

    if (k < u->key) ret = treeSearch(u->left, k);
    else if (k > u->key) ret = treeSearch(u->right, k);
    else ret = u;

    return ret;
}
Node treeSuccessor(Node x)
{
    return NIL;
}
void treeDelete(Node z)
{
    Node y; // node to be deleted
    Node x; // child of y
}

void insert(int k)
{
    Node y = NIL;
    Node x = root;
    Node z;

    z = (Node)malloc(sizeof(struct node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL) {
        y = x;
        if (k < x->key) x = x->left;
        else x = x->right;
    }
    if (y == NIL) root = z;
    else if (k < y->key) y->left = z;
    else y->right = z;
}

void inorder(Node u)
{
    if (u == NIL) return;
    
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);    
}
void preorder(Node u)
{
    if (u == NIL) return;

    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}

int main(int, char**)
{
    int n, i, x;
    string com;
    cin >> n;

    for ( i = 0; i < n; i++ ){
        cin >> com;
        if ( com[0] == 'f' ){
            cin >> x;
            Node t = treeSearch(root, x);
            if ( t != NIL ) cout << "yes" << endl;
            else cout << "no" << endl;
        } else if ( com[0] == 'i' ){
            cin >> x;
            insert(x);
        } else if ( com[0] == 'p' ){
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        } else if ( com[0] == 'd' ){
            cin >> x;
            treeDelete(treeSearch(root, x));
        }
    }
    return 0;
}

