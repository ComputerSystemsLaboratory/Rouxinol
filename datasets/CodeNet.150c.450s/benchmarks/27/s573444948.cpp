#include <bits/stdc++.h>
#define ll long long
#define double long double
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for(int i=1;i<=(n);i++)
#define mod (ll)(1e9+7)
#define inf (ll)(3e18+7)
#define P pair<int,int>
#define PiP pair<int,pair<int,int>>
#define all(x) x.begin(),x.end()
using namespace std;

struct Node{
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k){
    Node *y = NIL, *x = root, *z;
    z = (Node*)malloc(sizeof(Node));
    z -> key = k;
    z -> right = NIL;
    z -> left = NIL;
    while(x != NIL){
        y = x;
        if(z->key < x->key){
            x = x -> left;
        }
        else{
            x = x -> right;
        }
    }
    z -> parent = y;
    if(y == NIL) root = z;
    else{
        if(z -> key < y -> key){
            y -> left = z;
        }
        else{
            y -> right = z;
        }
    }
    return;
}

void inParse(Node *u){
    if(u == NIL)return;
    inParse(u -> left);
    cout << " " << u -> key;
    inParse(u -> right);
}

void preParse(Node *u){
    if(u == NIL)return;
    cout << " " << u -> key;
    preParse(u -> left);
    preParse(u -> right);
}

int main() {
    int n, x;
    string q;
    cin >> n;
    rep(i, n){
        cin >> q;
        if(q == "insert"){
            cin >> x;
            insert(x);
        }
        else {
            inParse(root);
            cout << endl;
            preParse(root);
            cout << endl;
        }
    }
}
