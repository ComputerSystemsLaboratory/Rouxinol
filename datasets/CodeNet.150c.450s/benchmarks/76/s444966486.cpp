#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n+1); ++i)
using namespace std;
using ll = long long;
// const int INF = +100100100;
typedef pair<int,int> P;


#define MAX 10005

struct Node{
    int key;
    Node *r,*l,*p;
};

Node *NIL, *root;


void insert(int v){
    // 以下の命令は、local変数をグローバル変数にするために必要
    Node *z = (Node *)malloc((sizeof(Node)));
    z->key = v;
    z->l = z->r = z->p = NIL;
    // z->l = NIL;z->r = NIL;z->p = NIL;
    //以上でzの初期化終了.以下compare
    Node *c = root;//parent
    Node *pre =NIL;
    while(c!=NIL){
        pre=c;
        if(c->key<z->key){
            c=c->r;
        }else{
            c=c->l;
        }
    }
    z->p = pre;
    if(pre==NIL){
        root = z;
    }else if(pre->key>z->key)pre->l = z;
    else pre->r = z;
}

Node * find(int k, Node *c){
    while(c!=NIL && k!=c->key){
        if(c->key>k)c=c->l;
        else c = c->r;
    }
    return c;
}


void inorder(Node *v){
    if(v==NIL)return;
    inorder(v->l);
    printf(" %d",v->key);
    inorder(v->r);
}


void preorder(Node *v){
    if(v==NIL)return;
    printf(" %d",v->key);
    preorder(v->l);
    preorder(v->r);
}


int main(){
    int n;
    // root = NIL;
    cin >> n;
    rep(i,n){
        string s;
        cin >> s;
        if(s=="insert"){
            int v;
            cin >> v;
            insert(v);
        }
        else if(s=="print"){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
        else if(s=="find"){
            int v;
            cin >> v;
            Node *t = find(v,root);
            if(t!=NIL)cout<<"yes"<<endl;
            else cout << "no" << endl;
        }
        else continue;
    }
    return 0;
}
