// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

struct Node{
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while(x != NIL){
        y = x;
        if(z->key < x->key) x = x->left;
        else x = x->right;
    }

    z->parent = y;
    if(y == NIL) root = z;
    else if(z->key < y->key) y->left = z;
    else y->right = z;
    
}

Node* find(Node *u, int k){
    while(u != NIL && k != u->key){
        if(k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

void preOrder(Node *u){
    if(u == NIL) return;
    printf(" %d", u->key);
    preOrder(u->left);
    preOrder(u->right);
}

void inOrder(Node *u){
    if(u == NIL) return;
    inOrder(u->left);
    printf(" %d", u->key);
    inOrder(u->right);
}

int main(){
    int N;
    scanf("%d", &N);
    rep(i, N){
        char S[10];
        int k;
        scanf("%s%d", S, &k);
        if(S[0] == 'i') insert(k);
        else if(S[0] == 'f'){
            Node *u = find(root, k);
            if(u != NIL) printf("yes\n");
            else printf("no\n");
        } 
        else {
            inOrder(root);
            printf("\n");
            preOrder(root);
            printf("\n");
        }
    }
}
