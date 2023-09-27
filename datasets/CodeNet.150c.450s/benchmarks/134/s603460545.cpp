#include<iostream>
using namespace std;
struct Node{int parent,left,right;};
#define NIL -1
struct Node T[26];
int n,p,l,r,s;
void Preorder(int x){
    cout<<" "<<x;
    if(T[x].left!=NIL) Preorder(T[x].left);
    if(T[x].right!=NIL) Preorder(T[x].right);
}
void Inorder(int x){
    if(x!=NIL){
    Inorder(T[x].left);
    cout<<" "<<x;
    Inorder(T[x].right);  
    }
}
void Postorder(int x){
    if(x!=NIL){
        Postorder(T[x].left);
        Postorder(T[x].right);
        cout<<" "<<x;
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++) T[i].parent=T[i].left=T[i].right=NIL;
    for(int i=0;i<n;i++){
        cin>>p>>l>>r;
        if(l!=NIL){T[p].left=l; T[l].parent=p;}
        if(r!=NIL){T[p].right=r; T[r].parent=p;}
    }
    for(int i=0;i<n;i++){
        if(T[i].parent==NIL) s=i;
    }
    cout<<"Preorder"<<endl;
    Preorder(s); cout<<endl;
    cout<<"Inorder"<<endl;
    Inorder(s); cout<<endl;
    cout<<"Postorder"<<endl;
    Postorder(s); cout<<endl;
    return 0;
}
