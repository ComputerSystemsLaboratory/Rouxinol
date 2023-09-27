#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;
struct node{
    int parent=-1;
    int lchild=-1;
    int rchild=-1;
};

vector<int> PreOrder,InOrder,PostOrder;

void getPre(node A[],int root){
    if(root==-1) return;
    PreOrder.push_back(root);
    getPre(A,A[root].lchild);
    getPre(A,A[root].rchild);

}
void getIn(node A[],int root){
    if(root==-1) return;
    getIn(A,A[root].lchild);
    InOrder.push_back(root);
    getIn(A,A[root].rchild);
}
void getPost(node A[],int root){
    if(root==-1) return;
    getPost(A,A[root].lchild);
    getPost(A,A[root].rchild);
    PostOrder.push_back(root);

}
void show(vector<int> B){
    for(int i=0;i<B.size();i++){
        cout<<' '<<B[i];
    }
    cout<<endl;
}
int main(){
    int n,k;
    node A[26];
    cin>>n;
    int root=0;
    for(int i=0;i<n;i++){
        cin>>k;
        cin>>A[k].lchild>>A[k].rchild;
        A[A[k].lchild].parent=k;
        A[A[k].rchild].parent=k;
    }
    for(int i=0;i<n;i++){
        if(A[i].parent==-1) {
            root=i;
            break;
        }
    }

    getPre(A,root);
    getIn(A,root);
    getPost(A,root);

    cout<<"Preorder"<<endl;
    show(PreOrder);
    cout<<"Inorder"<<endl;
    show(InOrder);
    cout<<"Postorder"<<endl;
    show(PostOrder);

    return 0;
}

