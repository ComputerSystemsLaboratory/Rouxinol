#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

#define MAX 100005
#define INF INT_MAX

typedef long long ll;
typedef pair<int, int> P;

class Node
{
public:
    int id;
    int parent;
    int left;
    int right;
    Node(int id) {
        this->id = id;
        parent = -1;
    }
};

vector<Node> nodes;
vector<int> preorder;
vector<int> inorder;
vector<int> postorder;

void dfs(int v, int p)
{
    int l = nodes[v].left;
    int r = nodes[v].right;
    int h = 0;

    preorder.push_back(v);
    if (l != -1) {
        dfs(l, v);
    }
    inorder.push_back(v);
    if (r != -1) {
        dfs(r, v);
    }
    postorder.push_back(v);
}

int main(int, char**)
{
    int n;
    cin >> n;

    rep(i,n) nodes.push_back(Node(i));
    rep(i,n) {
        int id, left, right;
        cin >> id >> left >> right;
        nodes[id].left = left;
        nodes[id].right = right;
        if (left != -1) {
            nodes[left].parent = id;
        }
        if (right != -1) {
            nodes[right].parent = id;
        }
    }
    auto itr = find_if(nodes.begin(), nodes.end(), [] (Node& nd) { return nd.parent == -1; } );
    int root = distance(nodes.begin(), itr);
    dfs(root, -1);

    cout << "Preorder" << endl;
    rep(i,n) cout << " " << preorder[i];
    cout << endl;

    cout << "Inorder" << endl;
    rep(i,n) cout << " " << inorder[i];
    cout << endl;

    cout << "Postorder" << endl;
    rep(i,n) cout << " " << postorder[i];
    cout << endl;

    return 0;
}
