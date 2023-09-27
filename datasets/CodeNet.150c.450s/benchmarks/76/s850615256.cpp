#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 500000
#define SENTINEL 2000000000

struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
struct Node
{
    ll key;
    Node *right,*left,*parent;
};
Node *root, *NIL;

Node *find(Node *u,ll k){
    while(u!=NIL&&k!=u->key){
        if(k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

void insert(ll k){
    Node *y = NIL;
    Node *x = root;
    Node *z;
    //メモリの確保
    z = (Node *)malloc(sizeof(Node));
    z -> key = k;
    z -> left = NIL;
    z -> right = NIL;

    while( x!=NIL ){
        y = x;
        if(z -> key < x ->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    z -> parent = y;
    if(y ==NIL){
        root = z;
    }else{
        if(z ->key < y->key){
            y ->left = z;
        }else{
            y ->right = z;
        }
    }
}
void PreorderWalk(Node *u){
    if(u == NIL)return;
    cout << " "<< u->key; 
    PreorderWalk(u->left);
    PreorderWalk(u->right);
}

void InorderWalk(Node *u){
    if(u == NIL)return; 
    InorderWalk(u -> left);
    cout << " "<< u->key;
    InorderWalk(u -> right);
}


int main(){
    ll n,i,x;
    string com;
    cin >> n;
    REP(i,n){
        cin >> com;
        if(com == "insert"){
            cin >> x;
            insert(x);
        }else if(com =="print"){
            InorderWalk(root);
            cout << endl;
            PreorderWalk(root);
            cout << endl;
        }else if(com[0] == 'f'){
            cin >> x;
            Node *t = find(root,x);
            if(t!=NIL){cout << "yes" << endl;}
            else{cout << "no" << endl;}
        }
    }
    return 0;
}
