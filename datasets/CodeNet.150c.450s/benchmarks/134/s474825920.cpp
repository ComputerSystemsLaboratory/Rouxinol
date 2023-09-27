#include<bits/stdc++.h>
using namespace std;

struct Node{
    int parent;
    int left;
    int right;
};

struct Node T[25];

void pre_P(int u){
    if(u == -1)return;
    printf(" %d",u);
    pre_P(T[u].left);
    pre_P(T[u].right);
}

void in_P(int u){
    if(u == -1)return;
    in_P(T[u].left);
    printf(" %d",u);
    in_P(T[u].right);
}

void pos_P(int u){
    if(u == -1)return;
    pos_P(T[u].left);
    pos_P(T[u].right);
    printf(" %d",u);
}



int main(){
    int n,v,l,r,root = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        T[i].parent = -1;
    }
    for(int i = 0;i < n;i++){
        cin >> v >> l >> r;
        T[v].left = l;
        T[v].right = r;
        if(l != -1)T[l].parent = v;
        if(r != -1)T[r].parent = v;
        
    }
    for(int i = 0;i < n;i++){
        if(T[i].parent == -1)root = i;
    }
    cout << "Preorder" << endl;
    pre_P(root);
  	cout << endl;
    cout << "Inorder" << endl;
    in_P(root);
    cout << endl;
    cout << "Postorder" << endl;
    pos_P(root);
    cout << endl;
    
}
