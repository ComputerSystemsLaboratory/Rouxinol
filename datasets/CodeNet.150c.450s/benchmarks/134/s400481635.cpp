#include <iostream>
using namespace std;

typedef struct Node {
    int parent, left, right;
} Node;

Node T[1000000];

void pre_order(int i){
    if (i == -1) return;
    cout <<" " << i;
    pre_order(T[i].left);
    pre_order(T[i].right);
}

void in_order(int i){
    if (i == -1) return;
    in_order(T[i].left);
    cout <<" " << i;
    in_order(T[i].right);
}

void post_order(int i){
    if (i == -1) return;
    post_order(T[i].left);
    post_order(T[i].right);
    cout <<" " << i;
}

int main(){
    int n, node, left, right;
    cin >> n;
    for (int i = 0; i<n; i++){
        T[i].parent = -1;
    }

    for (int i = 0; i<n; i++){
        cin >> node >> left >> right;
        T[node].left = left;
        T[node].right = right;
        if (left != -1){
            T[left].parent = node;
        }
        if (right != -1){
            T[right].parent = node;
        }
    }

    int root;
    for (int i = 0; i<n; i++){
        if (T[i].parent == -1) root = i ;
    }
    cout << "Preorder" << endl;
    pre_order(root);
    cout << endl;
    cout << "Inorder" << endl;
    in_order(root);
    cout << endl;
    cout << "Postorder" << endl;
    post_order(root);
    cout << endl;
    return 0;
}