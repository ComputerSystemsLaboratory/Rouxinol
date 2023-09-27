#include <bits/stdc++.h>
using namespace std;
#define NIL -1

struct Node{
    int p,l,r;
};

void preParse(vector<Node> &T,int u){
    if(u==NIL){
        return;
    }
    cout<<' '<<u;
    preParse(T,T[u].l);
    preParse(T,T[u].r);
}

void inParse(vector<Node> &T,int u){
    if(u==NIL){
        return;
    }
    inParse(T,T[u].l);
    cout<<' '<<u;
    inParse(T,T[u].r);
}

void postParse(vector<Node> &T,int u){
    if(u==NIL){
        return;
    }
    postParse(T,T[u].l);
    postParse(T,T[u].r);
    cout<<' '<<u;
}

int main(){
    int n;
    cin>>n;
    vector<Node> T(25);
    for(int i=0;i<n;i++){
        T[i].p=T[i].l=T[i].r=NIL;
    }
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        if(y!=-1){
            T[x].l=y;
            T[y].p=x;
        }
        if(z!=-1){
            T[x].r=z;
            T[z].p=x;
        }
    }
    int root;
    for(int i=0;i<n;i++){
        if(T[i].p==-1){
            root=i;
        } 
    }

    cout<<"Preorder"<<endl;;
    preParse(T,root);
    cout<<endl;
    
    cout<<"Inorder"<<endl;
    inParse(T,root);
    cout<<endl;

    cout<<"Postorder"<<endl;
    postParse(T,root);
    cout<<endl;
}
