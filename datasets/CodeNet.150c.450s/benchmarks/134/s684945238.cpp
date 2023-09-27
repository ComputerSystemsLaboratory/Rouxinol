#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;

constexpr int MAX_W = 100000;

struct Node {
    int parent = -1;
    int left = -1;
    int right = -1;

    Node() : parent(-1), left(-1), right(-1) {}
    Node(int p, int l, int r) : parent(p), left(l), right(r) {}
    Node(Node& n) {
        parent = n.parent;
        left = n.left;
        right = n.right;
    }
};

int root(vector<Node>& nodes) {
    int i = 0;
    while (nodes[i].parent != -1) { i = nodes[i].parent; }
    return i;
}

void preorder(vector<Node>& nodes, vi& a, int i) {
    a.push_back(i);
    if (nodes[i].left != -1) { preorder(nodes, a, nodes[i].left); }
    if (nodes[i].right != -1) { preorder(nodes, a, nodes[i].right); }
}

void inorder(vector<Node>& nodes, vi& a, int i) {
    if (nodes[i].left != -1) { inorder(nodes, a, nodes[i].left); }
    a.push_back(i);
    if (nodes[i].right != -1) { inorder(nodes, a, nodes[i].right); }
}

void postorder(vector<Node>& nodes, vi& a, int i) {
    if (nodes[i].left != -1) { postorder(nodes, a, nodes[i].left); }
    if (nodes[i].right != -1) { postorder(nodes, a, nodes[i].right); }
    a.push_back(i);
}

void print(const vi& a) {
    int n = a.size();
    rep(i, 0, n) {
        cout << " " << a[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<Node> nodes(n);

    rep(i, 0, n) {
        int id, left, right;
        cin >> id >> left >> right;

        nodes[id].left = left;
        nodes[id].right = right;

        if (left != -1) { nodes[left].parent = id; }
        if (right != -1) { nodes[right].parent = id; }
    }

    vi pre, in, post;
    int r = root(nodes);

    preorder(nodes, pre, r);
    cout << "Preorder" << endl;
    print(pre);

    inorder(nodes, in, r);
    cout << "Inorder" << endl;
    print(in);

    postorder(nodes, post, r);
    cout << "Postorder" << endl;
    print(post);

    return 0;
}
