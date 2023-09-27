#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;

void dfs(int root, vector<vector<int>> nodes, vector<int>& preorder, vector<int>& inorder, vector<int>& postorder) {
    preorder.push_back(root);
    if (nodes[root][0] != -1) {
        dfs(nodes[root][0], nodes, preorder, inorder, postorder);
    }
    inorder.push_back(root);
    if (nodes[root][1] != -1) {
        dfs(nodes[root][1], nodes, preorder, inorder, postorder);
    }
    postorder.push_back(root);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, root;
    cin>>n;
    vector<vector<int>> nodes(n, vector<int>(2));
    vector<bool> ischild(n);
    rep(i, n) {
        int id, left, right;
        cin>>id>>left>>right;
        nodes[id][0] = left;
        nodes[id][1] = right;
        if (nodes[id][0] != -1) {
            ischild[nodes[id][0]] = true;
        }
        if (nodes[id][1] != -1) {
            ischild[nodes[id][1]] = true;
        }
    }
    rep(i, n) {
        if (!ischild[i]) root = i;
    }

    vector<int> preorder, inorder, postorder;
    dfs(root, nodes, preorder, inorder, postorder);

    cout<<"Preorder"<<endl;
    rep(i, n) cout<<" "<<preorder[i];
    cout<<endl;

    cout<<"Inorder"<<endl;
    rep(i, n) cout<<" "<<inorder[i];
    cout<<endl;

    cout<<"Postorder"<<endl;
    rep(i, n) cout<<" "<<postorder[i];
    cout<<endl;
}
