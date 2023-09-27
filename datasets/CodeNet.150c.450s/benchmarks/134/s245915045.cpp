#include <iostream>
using namespace std;
#define MAX 25
struct Node{
    int parent;
    int left;
    int right;
};
Node N[MAX];
int root;

void printPreorder(int node){
    cout << node;
    
    if(N[node].left != -1){
        cout << " ";
        printPreorder(N[node].left);
    }
    if(N[node].right != -1){
        cout << " ";
        printPreorder(N[node].right);
    }
}

void printInorder(int node){
    if(N[node].left != -1){
        printInorder(N[node].left);
        cout << " ";
    }
    cout << node;
    if(N[node].right != -1){
        cout << " ";
        printInorder(N[node].right);
    }
}

void printPostorder(int node){
    if(N[node].left != -1){
        printPostorder(N[node].left);
        cout << " ";
    }
    if(N[node].right != -1){
        printPostorder(N[node].right);
        cout << " ";
    }
    cout << node;
}

int main(void){
    int n, id, l, r;
    
    cin >> n;
    for(int i = 0; i < n; i++) N[i].parent = -1;
    
    for(int i = 0; i < n; i++){
        cin >> id >> l >> r;
        N[id].left = l;
        N[id].right = r;
        if(l != -1) N[l].parent = id;
        if(r != -1) N[r].parent = id;
    }
    
    for(int i = 0; i < n; i++){
        if(N[i].parent == -1){
            root = i;
            break;
        }
    }
    
    cout << "Preorder" << endl;
    cout << " ";
    printPreorder(root);
    cout << endl;
    
    cout << "Inorder" << endl;
    cout << " ";
    printInorder(root);
    cout << endl;
    
    cout << "Postorder" << endl;
    cout << " ";
    printPostorder(root);
    cout << endl;
}

