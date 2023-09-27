#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;


struct Node {int parent,left,right;};
Node a[30];

void preorder(int i){
    if(i==-1)return;
    cout<<" "<<i;
    preorder(a[i].left);
    preorder(a[i].right);
}
void inorder(int i){
    if(i==-1)return;
    inorder(a[i].left);
    cout<<" "<<i;
    inorder(a[i].right);
}
void postorder(int i){
    if(i==-1)return;
    postorder(a[i].left);
    postorder(a[i].right);
    cout<<" "<<i;
}

int main(){
    int n;
    cin>>n;
    rep(i,n){
        a[i].parent=-1;
        a[i].left=-1;
        a[i].right=-1;
    }
    rep(i,n){
        int node,l,r;
        cin>>node>>l>>r;
        a[node].left=l;
        a[node].right=r;
        if(l>=0) {
            a[l].parent=node;
        }
        if(r>=0) {
            a[r].parent=node;
        }
    }
    int root;
    rep(i,n){
        if(a[i].parent==-1){
            root=i;
            break;
        }
    }
    cout<<"Preorder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Inorder"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Postorder"<<endl;
    postorder(root);
    cout<<endl;
    
    return 0;

}
