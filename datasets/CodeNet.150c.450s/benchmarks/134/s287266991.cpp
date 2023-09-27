#include<iostream>
#define MAX 25
#define NIL -1
using namespace std;

struct Node{
    int p,lc,rc;
};

Node T1[MAX],T2[MAX],T3[MAX];

void Preorder(Node T[],int u){
    if(u==NIL) return;
    cout<<" "<<u;
    Preorder(T,T[u].lc);
    Preorder(T,T[u].rc);
}

void Inorder(Node T[],int u){
    if(u==NIL) return;
    Inorder(T,T[u].lc);
    cout<<" "<<u;
    Inorder(T,T[u].rc);
}

void Postorder(Node T[],int u){
    if(u==NIL) return;
    Postorder(T,T[u].lc);
    Postorder(T,T[u].rc);
    cout<<" "<<u;
}

int main(){
    int n,v,l,r,root;
    cin>>n;
    for(int i=0;i<n;i++){
        T1[i].p=T1[i].lc=T1[i].rc=NIL;
    }
    for(int i=0;i<n;i++){
        cin>>v>>l>>r;
        T1[v].lc=l;
        T1[v].rc=r;
        if(l!=NIL) T1[l].p=v;
        if(r!=NIL) T1[r].p=v;
    }
    for(int i=0;i<MAX;i++){
        T2[i]=T1[i];
        T3[i]=T1[i];
    }
    for(int i=0;i<n;i++){
        if(T1[i].p==NIL) root=i;
    }
    cout<<"Preorder"<<endl;
    Preorder(T1,root);
    cout<<endl;
    cout<<"Inorder"<<endl;;
    Inorder(T2,root);
    cout<<endl;
    cout<<"Postorder"<<endl;
    Postorder(T3,root);
    cout<<endl;
}
