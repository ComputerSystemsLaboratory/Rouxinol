#include <bits/stdc++.h>
using namespace std;
const int nil = -1;

struct Node{int parent,left,right;};
Node node_array[26];

void preorder(int node_number){
    if(node_number == nil) return;
    printf(" %d",node_number);
    preorder(node_array[node_number].left);
    preorder(node_array[node_number].right);
}

void inorder(int node_number){
    if(node_number == nil) return;
    inorder(node_array[node_number].left);
    printf(" %d",node_number);
    inorder(node_array[node_number].right);
}

void postorder(int node_number){
    if(node_number == nil) return;
    postorder(node_array[node_number].left);
    postorder(node_array[node_number].right);
    printf(" %d",node_number);
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        node_array[i].parent = nil;
    }
    for(int i=0;i<n;i++){
        int node_number,left,right;
        cin >> node_number >> left >> right;
        node_array[node_number].left = left;
        node_array[node_number].right = right;
        if(left != nil) node_array[left].parent = node_number;
        if(right != nil) node_array[right].parent = node_number;
    }
    int root;
    for(int i=0;i<n;i++){
        if(node_array[i].parent == nil) root = i;
    }
    cout << "Preorder" << endl;
    preorder(root);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(root);
    cout << endl;
}


