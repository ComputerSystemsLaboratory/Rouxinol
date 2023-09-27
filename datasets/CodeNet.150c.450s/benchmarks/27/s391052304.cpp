#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
using P = pair<int,int>;

/* 大文字を小文字に変換 */
char tolower(char c) {return (c + 0x20);}
/* 小文字を大文字に変換 */
char toupr(char c) {return (c - 0x20);}

// if('A'<=s[i] && s[i]<='Z') s[i] += 'a'-'A';

/*
string s = "abcdefg"
s.substr(4) "efg"
s.substr(0,3) "abc"
s.substr(2,4) "cdef"

// イテレータ要素のインデックス
distance(A.begin(), itr);
*/

struct Node {
    ll key;
    Node *parent, *left, *right;
};
Node *NIL, *root;

void insert(ll k){
    Node *y = NIL;   // xの親
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));   // Node分のポインタの容量をとる
    z->key = k; z->left = NIL; z->right = NIL;

    while(x != NIL){
        y = x;  // 親を設定
        if((z->key) < (x->key)){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    z->parent = y;
    if(y == NIL) root = z;
    else if(y->key > z->key) y->left = z;
    else y->right = z;
}

void preorder(Node *n){
    if(n == NIL) return;
    printf(" %ld", n->key);
    preorder(n->left);
    preorder(n->right);
}

void inorder(Node *n){
    if(n == NIL) return;
    inorder(n->left);
    printf(" %ld", n->key);
    inorder(n->right);
}

int main()
{
    int m; cin >> m;
    rep(i,m){
        string c; cin >> c;
        if(c == "insert"){
            ll k; cin >> k;
            insert(k);
        }else if(c == "print"){
            inorder(root); cout << endl;
            preorder(root); cout << endl;
        }
    }
}
