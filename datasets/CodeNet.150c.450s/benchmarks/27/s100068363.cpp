#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
struct Node{
    int key;
    Node *l,*r;
};
vector<int>p;
Node *T;
int isn;
void insert(int key){

    if(T==NULL)
    {
        T=(Node* )malloc(sizeof(Node));
        T->key=key;
        T->l=NULL;
        T->r=NULL;
        //cout<<T->key<<endl;
        return;
    }
    Node *z=(Node* )malloc(sizeof(Node));
    z->key=key;
    z->l=NULL;
    z->r=NULL;
    Node *p,*temp=T;
    while(temp!=NULL)
    {
        p=temp;
        if(z->key<temp->key)
            temp=temp->l;
        else
            temp=temp->r;
    }
    if(z->key<p->key)
        p->l=z;
    else
        p->r=z;
}
void preOrder(Node *T){
    if(T==NULL){
        //cout<<1<<endl;
        return;
    }
    cout<<' '<<T->key;
    preOrder(T->l);
    preOrder(T->r);
}
void inOrder(Node *T){
    if(T==NULL)return;
    inOrder(T->l);
    cout<<' '<<T->key;
    inOrder(T->r);
}
int main(){
    int m,key;
    char com[20];
    T=NULL;
    isn=0;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>com;
        if(com[0]=='i')
        {
            cin>>key;
            insert(key);
            //cout<<1;
        }
        else
        {
            inOrder(T);
            cout<<endl;
            preOrder(T);
            //p.clear();
            cout<<endl;
            
        }
    }
    return 0;
}
