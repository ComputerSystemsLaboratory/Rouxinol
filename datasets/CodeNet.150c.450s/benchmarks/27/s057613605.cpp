#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

template <class T>
struct Node {
    T value;
    size_t parent, left, right;
    Node(): value(), parent(-1), left(-1), right(-1) {}
    Node(T v): value(v), parent(-1), left(-1), right(-1) {}
};

template <class T>
struct BinarySearchTree {
    vector<Node<T>> nodes;
    size_t root;
    BinarySearchTree(): root(-1) {}
    void insert(T v) {
        Node<T> z(v);
        nodes.push_back(z);

        size_t x=root, y=-1;
        while (~x) {
            y = x;
            if (v < nodes[x].value) {
                x = nodes[x].left;
            } else {
                x = nodes[x].right;
            }
        }

        nodes.back().parent = y;

        if (!~y) {
            root = 0;
        } else if (v < nodes[y].value) {
            nodes[y].left = nodes.size()-1;
        } else {
            nodes[y].right = nodes.size()-1;
        }
    }
    template <class Functor>
    void walk_inorder(Functor F, size_t x=0) {
        if (!~x) return;

        walk_inorder(F, nodes[x].left);
        F(nodes[x]);
        walk_inorder(F, nodes[x].right);
    }
    template <class Functor>
    void walk_preorder(Functor F, size_t x=0) {
        if (!~x) return;

        F(nodes[x]);
        walk_preorder(F, nodes[x].left);
        walk_preorder(F, nodes[x].right);
    }
};

int main() {
    size_t n;
    scanf("%zu", &n);

    auto output=[](Node<int> &x)->void {
        printf(" %d", x.value);
    };

    BinarySearchTree<int> tree;
    for (size_t i=0; i<n; ++i) {
        char buf[1<<3];
        scanf("%s", buf);
        string instr(buf);

        if (instr == "insert") {
            int key;
            scanf("%d", &key);
            tree.insert(key);
        } else if (instr == "print") {
            tree.walk_inorder(output);
            printf("\n");
            tree.walk_preorder(output);
            printf("\n");
        }
    }

    return 0;
}