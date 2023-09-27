#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void preorder_walk(int node, vector<int> left, vector<int> right){
    if (node == -1) return;
    cout << ' ' << node;
    preorder_walk(left[node], left, right);
    preorder_walk(right[node], left, right);
}

void inorder_walk(int node, vector<int> left, vector<int> right){
    if (node == -1) return;
    inorder_walk(left[node], left, right);
    cout << ' ' << node;
    inorder_walk(right[node], left, right);
}

void postorder_walk(int node, vector<int> left, vector<int> right){
    if (node == -1) return;
    postorder_walk(left[node], left, right);
    postorder_walk(right[node], left, right);
    cout << ' ' << node;
}


int main()
{
    int n = 0;
    cin >> n;
    vector<int> parent(n);
    vector<int> left(n);
    vector<int> right(n);
    fill(parent.begin(), parent.end(), -1);
    fill(left.begin(), left.end(), -1);
    fill(right.begin(), right.end(), -1);
    
    int idx = 0, L = 0, R = 0;
    for (int i = 0; i != n; ++i){
        cin >> idx >> L >> R;
        left[idx] = L;
        right[idx] = R;
        if (L != -1) parent[L] = idx;
        if (R != -1) parent[R] = idx;
    }
    
    int root = find(parent.begin(), parent.end(), -1) - parent.begin();
    
    cout << "Preorder" << endl;
    preorder_walk(root, left, right);
    cout << endl;
    cout << "Inorder" << endl;
    inorder_walk(root, left, right);
    cout << endl;
    cout << "Postorder" << endl;
    postorder_walk(root, left, right);
    cout << endl;
    return 0;
}