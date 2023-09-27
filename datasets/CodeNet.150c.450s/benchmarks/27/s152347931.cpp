#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i,f,n) for(int i=(f); i<=(n); ++i)
#define outl(x) cout<< (x) << '\n'
#define FAST() cin.tie(0), ios::sync_with_stdio(false)

struct Node{
    int key;
    Node *p, *left, *right;
};

Node *root, *NIL;

void insert(int k)
{
    Node *par = NIL;    //x??????
    Node *now = root;   //root???????§???????
    Node *z;            //?????\?????????????????????????????????

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    //-----??¢?´¢-----
    while(now != NIL){
        par = now;
        if(z->key  <  now->key)
            now = now->left;
        else
            now = now->right;
    }

    z->p = par;     //?????\?????????????????????????¨????
    if(par == NIL){ //Tree???????????´???
        root = z;
    } else {        //???????????????????¨????(?????????????±???????)
        (z->key  <  par->key ? par->left : par->right) = z;
    }
}
void inorder(Node *u)
{
    if(u == NIL)return;
    inorder(u->left);
    cout << ' ' << u->key;
    inorder(u->right);
}
void preorder(Node *u)
{
    if(u == NIL)return;
    cout << ' ' << u->key;
    preorder(u->left);
    preorder(u->right);
}

int main()
{
    FAST();
    int N, x;
    string com;
    
    cin >> N;

    while(N--){
        cin >> com;
        if(com[0] == 'i'){
            cin >> x;
            insert(x);
        }
        else{
            inorder(root);
            cout << '\n';
            preorder(root);
            cout << '\n';
        }
    }
}