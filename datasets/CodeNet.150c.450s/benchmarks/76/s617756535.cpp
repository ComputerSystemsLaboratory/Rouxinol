#include<iostream>
using namespace std;
struct node{
    int value;
    node *parent,*l,*r;
    node(){
        value=-2000000001;
        parent=l=r=NULL;
    }
};

void insert(node*,int);
void Preorder(node*);
void Inorder(node*);
bool find(node*,int);
int main(void){
    int n,num;
    node *t=new node;
    string str;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="insert"){
            cin>>num;
            insert(t,num);
        }
        else if(str=="find"){
            cin>>num;
            if(find(t,num)==true) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        else{
            Inorder(t);
            cout<<endl;
            Preorder(t);
            cout<<endl;
        }
    }
    
    return 0;
}
void insert(node *t,int num){
    node *z=new node;
    
    z->value=num;
    if(t->parent==NULL && t->l==NULL && t->r==NULL && t->value==-2000000001){
        t->value=num;
        return;
    }
    while(z->parent==NULL){
        if(num > t->value){
            if(t->r==NULL){
                t->r=z;
                z->parent=t;
            }
            else    t=t->r;
        }
        else{
            if(t->l==NULL){
                t->l=z;
                z->parent=t;
            }
            else    t=t->l;
        }
    }
}
void Preorder(node *t){
	cout<<" "<<t->value;
	if(t->l!=NULL) Preorder(t->l);
	if(t->r!=NULL) Preorder(t->r);
}
void Inorder(node *t){
	if(t->l!=NULL) Inorder(t->l);
	cout<<" "<<t->value;
	if(t->r!=NULL) Inorder(t->r);
}
bool find(node *t,int num){
    if(t->value==num)   return true;
    if(t->value>num && t->l!=NULL)   return find(t->l,num);
    if(t->value<num && t->r!=NULL)  return find(t->r,num);
    return false;
}