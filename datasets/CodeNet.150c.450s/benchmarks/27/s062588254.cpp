#include<iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

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
*/

struct Node{
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  // z = malloc(sizeof(struct node));  // node構造体サイズのメモリ領域をとる
  z = (Node *)malloc(sizeof(Node));
  z->key = k;   // ポインタ変数にアクセスする時はアロー演算子
  z->left = NIL;
  z->right = NIL;
  
  while(x != NIL){
      y = x;    // 最終的なzの親を決定する
      if(z->key < x->key) x = x->left;
      else x = x->right;
  }
  z->parent = y;
  if(y == NIL){
      root = z; // 親要素が空であれば、zが根となる
  }else{
      if(z->key < y->key){
          y->left = z;
      }else{
          y->right = z;
      }
  }
}

void inorder(Node *u){
    if(u == NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}
void preorder(Node *u){
    if(u == NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main()
{
    int n, i, x;
    string com;
    scanf("%d", &n);

    rep(i, n){
        cin >> com;
        if(com == "insert"){
            scanf("%d", &x);
            insert(x);
        }else if(com == "print"){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
}
