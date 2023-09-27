#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *p,*l,*r;//parent,left,rightの意味
};

Node *root,*NIL;//虚無nodeとrootnode

void insert(int v){//keyがvな節点を受け取る関数。
    Node *y=NIL;//親を設定する用
    Node *x=root;//rootを設定
    Node *z;//挿入するやつ
    z=(Node*)malloc(sizeof(Node));
    z->key=v;
    z->l=NIL;
    z->r=NIL;
    while(x!=NIL){//xがNIL、つまり葉になるまで続ける
        y=x;//一つ下へ向かう時に親を保存しておく
        if(z->key < x->key){
            x=x->l;//視点をxに
        }else{
            x=x->r;
        }
    }
    z->p=y;//以下で、親の方にも追加しないと。
    if(y==NIL){
        root=z;
    }else{
        if(z->key < y->key){
            y->l=z;
        }else{
            y->r=z;
        }
    }
}
void find(int k){
    Node *x=root;//こいつを下げていく
    while(x!=NIL){
        if(x->key==k){
            cout<<"yes"<<endl;return;
        }else if(k < x->key){
            x = x->l;
        }else{
            x = x->r;
        }
    }
    cout<<"no"<<endl;return;
}

//出力用関数を二つ用意
void preorder(Node *u){
    if(u==NIL)return;
    cout<<" "<<u->key;
    preorder(u->l);
    preorder(u->r);
}
void inorder(Node *u){
    if(u==NIL)return;
    inorder(u->l);
    cout<<" "<<u->key;
    inorder(u->r);
}

int main(){
    int n;cin>>n;
    string order;int v;
    for(int i=0;i<n;i++){
        cin>>order;
        if(order=="insert"){
            cin>>v;insert(v);
        }else if(order=="find"){
            cin>>v;find(v);
        }else{
            inorder(root);cout<<endl;
            preorder(root);cout<<endl;
        }
    }
    return 0;
}
