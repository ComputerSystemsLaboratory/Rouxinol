#include <iostream>
using namespace std;
struct T{
    int parent,left,right;
};
void maketree(T tree[]){
    int node,l,r;
    cin>>node>>l>>r;
    tree[node].left=l;
    tree[node].right=r;
    tree[l].parent=node;
    tree[r].parent=node;
}
void Preorder(int x,T tree[]){
    if(x!=-1){
        cout<<" "<<x;
        Preorder(tree[x].left,tree);
        Preorder(tree[x].right,tree);
    }
}
void Inorder(int x,T tree[]){
    if(x!=-1){
        Inorder(tree[x].left,tree);
        cout<<" "<<x;
        Inorder(tree[x].right,tree);
    }
}
void Postorder(int x,T tree[]){
    if(x!=-1){
        Postorder(tree[x].left,tree);
        Postorder(tree[x].right,tree);
        cout<<" "<<x;
    }
}
int main(){
    int n,x=0;
    T tree[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        tree[i].parent=-1;
        tree[i].left=-1;
        tree[i].right=-1;
    }
    for(int i=0;i<n;i++){
        maketree(tree);
    }
    while(tree[x].parent!=-1){
        x=tree[x].parent;
    }
    cout<<"Preorder"<<endl;
    Preorder(x,tree);
    cout<<endl<<"Inorder"<<endl;;
    Inorder(x,tree);
    cout<<endl<<"Postorder"<<endl;
    Postorder(x,tree);
    cout<<endl;
    return 0;
}
