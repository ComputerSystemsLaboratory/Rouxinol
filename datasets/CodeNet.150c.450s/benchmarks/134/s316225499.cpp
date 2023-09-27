#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iterator>
#include <limits>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstdint>
#include <cassert>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i < (end); ++i)
#define REP(i, n) FOR(i, 0, n)

constexpr int DNE = -1;

struct Node {
    int parent;
    int left;
    int right;
    Node() : parent(DNE), left(DNE), right(DNE) {}
};

vector<Node> read_problem()
{
    int n;
    scanf("%d\n", &n);

    vector<Node> nodes(n);
    REP(i, n) {
        int id;
        int left;
        int right;
        scanf("%d %d %d\n", &id, &left, &right);

        nodes[id].left  = left;
        nodes[id].right = right;
        nodes[left].parent  = id;
        nodes[right].parent = id;
    }

    return nodes;
}

void preorder(const vector<Node>& nodes, int id)
{
    const Node& node = nodes[id];

    printf(" %d", id);
    if(node.left != DNE)
        preorder(nodes, node.left);
    if(node.right != DNE)
        preorder(nodes, node.right);
}

void inorder(const vector<Node>& nodes, int id)
{
    const Node& node = nodes[id];

    if(node.left != DNE)
        inorder(nodes, node.left);
    printf(" %d", id);
    if(node.right != DNE)
        inorder(nodes, node.right);
}

void postorder(const vector<Node>& nodes, int id)
{
    const Node& node = nodes[id];

    if(node.left != DNE)
        postorder(nodes, node.left);
    if(node.right != DNE)
        postorder(nodes, node.right);
    printf(" %d", id);
}

int main()
{
    vector<Node> nodes = read_problem();
    int root = distance(nodes.begin(),
                        find_if(nodes.begin(), nodes.end(),
                                [](const Node& node) { return node.parent == DNE; }));
    //printf("%d\n", root);

    puts("Preorder");
    preorder(nodes, root);
    puts("");

    puts("Inorder");
    inorder(nodes, root);
    puts("");

    puts("Postorder");
    postorder(nodes, root);
    puts("");

    return 0;
}