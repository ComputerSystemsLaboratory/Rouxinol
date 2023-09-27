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

const int MAX_N = 30, NIL = -1;
// parent親、left左の子、 right右の子
struct Node { int parent, left, right; };
Node T[MAX_N];
int H[MAX_N];


int getSibling(int u){
    if(T[u].parent == NIL) return -1;
    if(T[T[u].parent].left == NIL || T[T[u].parent].right == NIL) return -1;
    else if(T[T[u].parent].left == u) return T[T[u].parent].right;
    else return T[T[u].parent].left;
}

int getDeg(int u){
    if(T[u].left == NIL && T[u].right == NIL) return 0;
    else if(T[u].left == NIL || T[u].right == NIL) return 1;
    else return 2;
}

int getDepth(int u){
    int d = 0;
    while(T[u].parent != -1){
        u = T[u].parent;
        d++;
    }
    return d;
}

int getParent(){
    int p = 0;
    while(T[p].parent != NIL){
        p = T[p].parent;
    }
    return p;
}

// uの初期値は必ず親の節点番号にする
int setHeight(int u){
    int h1, h2; h1 = h2 = 0;
    if(T[u].left != NIL){
        h1 = setHeight(T[u].left) + 1;
    }
    if(T[u].right != NIL){
        h2 = setHeight(T[u].right) + 1;
    }
    return H[u] = max(h1, h2);
}

// 先行順巡回
vector<int> pre;
void preorder(int u){
    pre.push_back(u);
    if(T[u].left != NIL) preorder(T[u].left);
    if(T[u].right != NIL) preorder(T[u].right);
}

// 中間順巡回
vector<int> In;
void inorder(int u){
    if(T[u].left != NIL) inorder(T[u].left);
    In.push_back(u);
    if(T[u].right != NIL) inorder(T[u].right);
}

// 後行順巡回
vector<int> post;
void postorder(int u){
    if(T[u].left != NIL) postorder(T[u].left);
    if(T[u].right != NIL) postorder(T[u].right);
    post.push_back(u);
}


int main()
{
    int n; cin >> n;
    // 初期化
    rep(i,n) T[i].parent = T[i].left = T[i].right = NIL;
    // 情報入力
    rep(i,n){
        int p; cin >> p;
        int l, r; cin >> l >> r;
        T[p].left = l; T[p].right = r;
        T[l].parent = T[r].parent = p;
    }
    // 各木の高さをセット
    int p = getParent();
    setHeight(p);
    /*
    rep(i,n){
        printf("node %d: parent = %d, sibling = %d, degree = %d, depth = %d, height = %d, ", i, T[i].parent, getSibling(i), getDeg(i), getDepth(i), H[i]);
        if(T[i].parent == NIL) printf("root\n");
        else{
            if(T[i].left == NIL && T[i].right == NIL) printf("leaf\n");
            else printf("internal node\n");
        }
    }
    */
   preorder(p);
   printf("Preorder\n");
   rep(i,pre.size()) printf(" %d", pre[i]); cout << endl;
   inorder(p);
   printf("Inorder\n");
   rep(i,In.size()) printf(" %d", In[i]); cout << endl;
   postorder(p);
   printf("Postorder\n");
   rep(i,post.size()) printf(" %d", post[i]); cout << endl;
}
