#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int parent = -1;
    int left   = -1;
    int right  = -1;
};

class Tree{
    vector<Node> node;
    int root;
    void preorder(int p, vector<int>& pre){
        if (p == -1) return;
        pre.push_back(p);
        preorder(node[p].left , pre);
        preorder(node[p].right, pre);
    }
    void inorder(int p, vector<int>& in){
        if (p == -1) return;
        inorder(node[p].left , in);
        in.push_back(p);
        inorder(node[p].right, in);
    }
    void postorder(int p, vector<int>& post){
        if (p == -1) return;
        postorder(node[p].left , post);
        postorder(node[p].right, post);
        post.push_back(p);
    }
    void print_order(const vector<int> v){
        for (int i = 0; i < v.size(); i++) {
            cout << " " << v[i];
        }
        cout << endl;
    }
public:
    Tree(int n){
        node.resize(n);
    }
    void add_node(int id, int l, int r){
        node[id].left  = l;
        node[id].right = r;
        if (l != -1) node[l].parent = id;
        if (r != -1) node[r].parent = id;
    }
    void set_root(){
        for (int i = 0; i < node.size(); i++) {
            if (node[i].parent == -1) {
                root = i;
                return;
            }
        }
    }
    void Preorder(){
        vector<int> pre;
        cout << "Preorder" << endl;
        preorder(root, pre);
        print_order(pre);
    }
    void Inorder(){
        vector<int> in;
        cout << "Inorder" << endl;
        inorder(root, in);
        print_order(in);
    }
    void Postorder(){
        vector<int> post;
        cout << "Postorder" << endl;
        postorder(root, post);
        print_order(post);
    }
};

int main(){
    int n;
    cin >> n;
    Tree T(n);
    for (int i = 0; i < n; i++) {
        int id, left, right;
        cin >> id >> left >> right;
        T.add_node(id, left, right);
    }
    T.set_root();
    T.Preorder();
    T.Inorder();
    T.Postorder();
    return 0;
}