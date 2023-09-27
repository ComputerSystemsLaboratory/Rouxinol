#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int parent,left,right;
    Node() : parent(-1), left(-1),right(-1){}
};

void printPre(int root, vector<Node> &v){
    if (root == -1)return;
    cout << " " << root;
    printPre(v[root].left,v);
    printPre(v[root].right,v);
}

void printIn(int root, vector<Node> &v){
    if (root == -1)return;
    printIn(v[root].left,v);
    cout << " " << root;
    printIn(v[root].right,v);
}

void printPost(int root, vector<Node> &v){
    if (root == -1)return;
    printPost(v[root].left,v);
    printPost(v[root].right,v);
    cout << " " << root;
}

int main(){
    int n;
    cin >> n;
    vector<Node> v(n);
    for (int i = 0; i < n; ++i){
        int id,left,right;
        cin >> id >> left >> right;
        v[id].left = left;
        v[id].right = right;
        v[left].parent = id;
        v[right].parent = id;
    }
    int root;
    for (int j = 0; j < n; ++j) if(v[j].parent == -1) root = j;
    cout << "Preorder" << endl;
    printPre(root,v);
    cout << endl;
    cout << "Inorder" << endl;
    printIn(root,v);
    cout << endl;
    cout << "Postorder" << endl;
    printPost(root,v);
    cout << endl;
    return 0;
}