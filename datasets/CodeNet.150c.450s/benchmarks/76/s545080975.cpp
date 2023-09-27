#include <iostream>
#include <cstdio>

using namespace std;
struct node{
    node *l,*p,*r;
    int key;
};
node *t ,*NIL;
void insert(int k){
    node *y=NIL;
    node *x=t;
    node *z;
    z = new node;
    z->key = k;
    z->l = NIL;
    z->r = NIL;
    while(x!=NIL){
        y=x;
        if(z->key<x->key){
            x=x->l;
        }
        else{
            x=x->r;
        }
    }
    z->p=y;
    if(y==NIL){
        t=z;
    }
    else {
        if(z->key<y->key)y->l=z;
        else y->r=z;
    }
}
void find(node *c,int k){
    if(c==NIL){
        cout<<"no"<<endl;
    }
    else if(k<c->key){
        find(c->l,k);
    }
    else if(k>c->key) {
        find(c->r,k);
    }
    else{
        cout<<"yes"<<endl;
    }
}
void In(node *c){
    if (c== NIL){
        return;
    }
    In(c->l);
	printf(" %d",c->key);
    In(c->r);
}
void Pre(node *c){
    if (c== NIL){
        return;
    }
    printf(" %d",c->key);
	Pre(c->l);
    Pre(c->r);
	
}
int main(){
    int n,x;
    string com;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>com;
        if(com=="insert"){
            cin>>x;
            insert(x);
        }
        else if(com=="find"){
            cin>>x;
            find(t,x);
        }
        else{
            In(t);
            cout<<endl;
            Pre(t);
            cout<<endl;
        }
    }
    return 0;
}




