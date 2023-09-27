#include <iostream>
#include <cstdlib>
using namespace std;
struct Node{
    int key;
    Node *p,*l,*r;
};
Node *root,*NIL;
void insert(int key){
    Node *y = NIL;//根节点的父节点
    Node *x = root;//根节点
    Node *z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->l = NIL;
    z->r = NIL;
    while(x!=NIL){
        y = x;//记录key的父节点
        if(z->key<x->key){
            x = x->l;//寻找key的父节点
        }else{
            x = x->r;
        }
    }
    z->p = y;
    if(y == NIL){
        root = z;
    }else if(y->key<z->key){//决定是左儿子还是右二子
        y->r = z;
    }else{
        y->l = z;
    }
}
void preTW(Node *u){
    if(u!=NIL){
        cout<<" "<<u->key;
        preTW(u->l);
        preTW(u->r);
    }
}
void inTW(Node *u){
    if(u!=NIL){
        inTW(u->l);
        cout<<" "<<u->key;
        inTW(u->r);
    }
}
int main()
{
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="insert"){
            cin>>key;
            insert(key);
        }else if(s=="print"){
            inTW(root);
            cout<<endl;
            preTW(root);
            cout<<endl;
        }
    }

    return 0;
}

