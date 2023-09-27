#include <iostream>
#include <string>
using namespace std;

struct node{
    int key;
    node *p,*l,*r;
};

int n;
node *N;

void tree_insert(node *z){
    node *y=NULL;
    node *x=N;
    while(x!=NULL){
        y=x;
        if(x->key>z->key)x=x->l;
        else if(x->key<z->key)x=x->r;
    }
    z->p=y;
    if(y==NULL)N=z;
    else if(y->key<z->key)y->r=z;
    else y->l=z;
}

void tree_find(int num){
    node *x=N;
    while(x!=NULL){
        if(x->key==num){
            cout<<"yes"<<endl;
            return;
        }
        if(x->key>num)x=x->l;
        else x=x->r;
    }
    cout<<"no"<<endl;
}

void in(node *x){
    if(x->l!=NULL)in(x->l);
    cout<<" "<<x->key;
    if(x->r!=NULL)in(x->r);
}

void pre(node *x){
    cout<<" "<<x->key;
    if(x->l!=NULL)pre(x->l);
    if(x->r!=NULL)pre(x->r);
}

void print(){
    node *x=N;
    in(x);
    cout<<endl;
    pre(x);
    cout<<endl;
}

int main()
{
    N=NULL;
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="insert"){
            int num;
            cin>>num;
            node *z=new node();
            z->key=num;z->l=z->r=z->p=NULL;
            tree_insert(z);
        }
        if(s=="find"){
            int num;
            cin>>num;
            tree_find(num);
        }
        if(s=="print"){
            print();
        }
    }
    return 0;
}