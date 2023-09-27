#include <bits/stdc++.h>
using namespace std;

stack<int> temp;
struct Node {
    int parent;
    int left;
    int right;
};
Node tree[25];

void preorder(int node) {
    printf(" %d", node);
    if(tree[node].left != -1) {
        preorder(tree[node].left);
    }
    if(tree[node].right != -1) {
        preorder(tree[node].right);
    }
}

void inorder(int node) {
    temp.push(node);
    if(tree[node].left != -1) {
        inorder(tree[node].left);
    }
    printf(" %d", temp.top());
    temp.pop();
    if(tree[node].right != -1) {
        inorder(tree[node].right);
    }
}

void postorder(int node){
    temp.push(node);
    if(tree[node].left != -1){
        postorder(tree[node].left);
    }
    if(tree[node].right != -1){
        postorder(tree[node].right);
    }
    printf(" %d", temp.top());
    temp.pop();
}
int findRoot(int node){
    while(tree[node].parent != -1){
        node = tree[node].parent;
    }
    return node; 
}

int main() {
    int n, it, left, right,parentNode;
    cin >> n;
    for(int i = 0; i < n; i++) {
        tree[i].parent = tree[i].right = tree[i].left = -1;
    }
    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &it, &left, &right);
        tree[it].left = left;
        tree[it].right = right;
        if(left != -1) {
            tree[left].parent = it;
        }
        if(right != -1) {
            tree[right].parent = it;
        }
    }
    parentNode = findRoot(0);
    cout << "Preorder" << endl;
    preorder(parentNode);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(parentNode);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(parentNode);
    cout << endl;
}
