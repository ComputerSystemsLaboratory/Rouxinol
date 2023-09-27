#include <iostream>
#include <vector>

using namespace std;

typedef struct NodeData * Node;

typedef struct NodeData {
    int rank;
    int val;
    Node parent;
}* Node;

Node make_set(int val)
{
    Node node = new NodeData();
    node->rank = 0;
    node->val = val;
    node->parent = node;

    return node;
}

Node find_parent(Node node)
{
    while (node->parent != node)
        node = node->parent;

    return node;
}

void union_set(Node x, Node y)
{
    auto x_parent = find_parent(x);
    auto y_parent = find_parent(y);

    if (x->parent->rank > y->parent->rank)
        y_parent->parent = x_parent;
    else if (x_parent->rank < y_parent->rank)
        x_parent->parent = y_parent;
    else if (x_parent != y_parent) {
        y_parent->parent = x_parent;
        x_parent->rank++;
    }
}

int main(void)
{
    int n, q;
    cin >> n >> q;
    vector<Node> disj_set(n);

    for (int i = 0; i < n; i++) 
        disj_set[i] = make_set(i);

    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) // unite
            union_set(disj_set[x], disj_set[y]);
        else { // same
            bool is_same = find_parent(disj_set[x]) == find_parent(disj_set[y]);
            cout << (is_same ? 1 : 0) << endl;
        }
    }
    
    return 0;
}