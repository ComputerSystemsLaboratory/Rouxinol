#include <iostream>
#include <string>
using namespace std;

struct node{
    int key;
    node *p,*l,*r;
};

int n;
node *N;

void in(node *r){
    if(r->l!=NULL)in(r->l);
    cout<<" "<<r->key;
    if(r->r!=NULL)in(r->r);
}

void pre(node *r){
    cout<<" "<<r->key;
    if(r->l!=NULL)pre(r->l);
    if(r->r!=NULL)pre(r->r);
}

void print(){
    node *r=N;
    in(r);
    cout<<endl;
    pre(r);
    cout<<endl;
}

void tree_insert(node *z){
    node *y=NULL;
    node *x=N;
    while(x!=NULL){
        y=x;
        if(x->key>z->key)x=x->l;
        else x=x->r;
    }
    z->p=y;

    if(y==NULL)N=z;
    else if(y->key<z->key)y->r=z;
    else y->l=z;
}

int main()
{
    N=NULL;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        string s;int num;
        cin>>s;
        if(s=="insert"){
            cin>>num;
            node *z=new node();
            z->key=num;z->p=z->l=z->r=NULL;
            tree_insert(z);
        }
        if(s=="print"){
            print();
        }
    }
    return 0;
}