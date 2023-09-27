#include<bits/stdc++.h>
using namespace std;
/*
alias g='g++ -std=c++17 -O2 pra.cpp'
alias a='./a.out'
cd programming
cd cpp
cd practice

*/
/*
11
0 1 4
1 2 3
2 9 -1
3 -1 -1
4 5 8
5 6 7
6 -1 -1
7 -1 -1
8 -1 10
9 -1 -1
10 -1 -1
*/
#define rep(i, n) for(int (i)=0; (i)<(n); i++)
#define pb push_back
#define pb push_back
using veci = vector<int>;
struct Node{
    int id;
    int parent = -1;
    int right = -1;
    int left = -1;
};
Node bintree[30];
int cnt=0;
void preorder(int n){
    cout << " " << bintree[n].id;
    if (~bintree[n].left){
        preorder(bintree[n].left);
    }
    if (~bintree[n].right){
        preorder(bintree[n].right);
    }
}
void inorder(int n){
    if (~bintree[n].left){
        inorder(bintree[n].left);//左真ん中右の順
    }
    if (!~bintree[n].left){
        cout << " " << bintree[n].id;
    }
    if (~bintree[n].right && ~bintree[n].left){
        cout << " " << bintree[n].id;
    }
    if (~bintree[n].right){
        inorder(bintree[n].right);
    }
    if (!~bintree[n].right && ~bintree[n].left){
        cout << " " << bintree[n].id;
    }
}
void postorder(int n){
    if (~bintree[n].left){
        postorder(bintree[n].left);
    }
    if (~bintree[n].right){
        postorder(bintree[n].right);
    }
    if (!~bintree[n].left && !~bintree[n].right){
        cout << " " <<  bintree[n].id;
    }
    if (!~bintree[n].right && ~bintree[n].left){
        cout << " "  << bintree[n].id;
    }
    if (~bintree[n].right && !~bintree[n].left){
        cout << " " <<  bintree[n].id;
    }
    if (~bintree[n].right && ~bintree[n].left){
        cout << " " << bintree[n].id;
    }
}
int main(){
    int n, id, left, right; cin >> n;
    rep(i, n){
        cin >> id >> left >> right;
        bintree[id].id = id;
        bintree[id].left = left;
        bintree[id].right = right;
        bintree[right].parent = id;
        bintree[left].parent = id;
    }
    int root;
    rep(i, n){
        if (bintree[i].parent == -1) root = i;
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

