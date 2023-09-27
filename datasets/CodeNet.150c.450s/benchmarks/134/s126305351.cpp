#include<iostream>
using namespace std;

struct Node{int parent,left,right;};
Node T[25];

void PreOrder(int root_id){
    if(root_id!=-1){
        cout <<" "<< root_id;
        PreOrder(T[root_id].left);
        PreOrder(T[root_id].right);
    }
}
void InOrder(int root_id){
    if(root_id!=-1){
        InOrder(T[root_id].left);
        cout << " " << root_id;
        InOrder(T[root_id].right);
    }
}

void PostOrder(int root_id){
    if(root_id!=-1){
        PostOrder(T[root_id].left);
        PostOrder(T[root_id].right);
        cout << " " << root_id;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<=n-1;i++)T[i].parent=-1;
    for(int i=0;i<=n-1;i++){
        int id, left, right;
        cin >> id >> left >> right;
        T[id].left =left;
        T[id].right=right;
        T[left].parent=id;
        T[right].parent=id;
    }
    int root;
    for(int i=0;i<=n-1;i++){
        if(T[i].parent==-1){
            root=i;
            break;
        }
    }
    cout << "Preorder"<< endl;
    PreOrder(root);
    cout << endl;
    cout << "Inorder"<< endl;
    InOrder(root);
    cout << endl;    
    cout << "Postorder"<< endl;
    PostOrder(root);
    cout << endl;
}
