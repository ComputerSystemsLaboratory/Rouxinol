#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct node{
    int parent;
    int left;
    int right;
    node(){
        parent = -1;
    }
};

int find_root(const vector<node>& T){
    for (int i = 0; i < T.size(); i++) {
        if (T[i].parent == -1) return i;
    }
}

void do_preorder(int id, const vector<node>& T, queue<int>& Q){
    if (id == -1) return;
    Q.push(id);
    do_preorder(T[id].left , T, Q);
    do_preorder(T[id].right, T, Q);
}

void do_inorder(int id, const vector<node>& T, queue<int>& Q){
    if (id == -1) return;
    do_inorder(T[id].left , T, Q);
    Q.push(id);
    do_inorder(T[id].right, T, Q);
}

void do_postorder(int id, const vector<node>& T, queue<int>& Q){
    if (id == -1) return;
    do_postorder(T[id].left , T, Q);
    do_postorder(T[id].right, T, Q);
    Q.push(id);
}

void print_Q(queue<int>& Q){
    while (!Q.empty()) {
        cout << " " << Q.front();
        Q.pop();
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector<node> T(n);
    for (int i = 0; i < n; i++) {
        int id, left, right;
        cin >> id >> left >> right;
        T[id].left  = left ;
        T[id].right = right;
        if (left  != -1) T[left].parent  = id;
        if (right != -1) T[right].parent = id;
    }

    int root = find_root(T);
    queue<int> Q;

    cout << "Preorder" << endl;
    do_preorder(root, T, Q);
    print_Q(Q);
    cout << "Inorder" << endl;
    do_inorder(root, T, Q);
    print_Q(Q);
    cout << "Postorder" << endl;
    do_postorder(root, T, Q);
    print_Q(Q);

    return 0;
}