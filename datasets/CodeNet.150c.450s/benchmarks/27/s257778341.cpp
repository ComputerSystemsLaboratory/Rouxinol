#include <iostream>
#include <vector>
#include <memory>

template <class Key>
class BinarySearchTree {
    struct Node {
        bool isvalid;  // falseなら空Node
        Key key;

        std::unique_ptr<Node> lch, rch;
        Node() : isvalid(false), key(0) {}
    };
    using pNode = std::unique_ptr<Node>;

private:
    pNode root;

    // keyを持つNodeのポインタを返す
    // なければkeyを持つべき空Nodeのポインタを返す
    pNode& search(Key key, pNode& node) {
        if (!node->isvalid) return node;
        if (key == node->key) return node;
        return search(key, (key < node->key ? node->lch : node->rch));
    }

    void dfs(int type, pNode& node, std::vector<Key>& v) {
        if (!node->isvalid) return;

        if (type < 0) v.push_back(node->key);
        dfs(type, node->lch, v);
        if (type == 0) v.push_back(node->key);
        dfs(type, node->rch, v);
        if (type > 0) v.push_back(node->key);
    }

public:
    explicit BinarySearchTree() : root(new Node()) {}

    void insert(Key key) {
        pNode& node = search(key, root);
        if (node->isvalid) return;

        node->isvalid = true;
        node->key = key;
        node->lch.reset(new Node());
        node->rch.reset(new Node());
    }

    // type < 0 : 行きがけ順
    // type = 0 : 通りがけ順
    // type > 0 : 帰りがけ順
    std::vector<Key> tour(int type) {
        std::vector<Key> ret;
        dfs(type, root, ret);
        return ret;
    }
};

int main() {
    int Q;
    std::cin >> Q;

    BinarySearchTree<int> bst;
    for (int q = 0; q < Q; ++q) {
        std::string type;
        std::cin >> type;

        if (type == "insert") {
            int key;
            std::cin >> key;
            bst.insert(key);
        } else {
            auto in = bst.tour(0);
            for (auto k : in) std::cout << " " << k;
            std::cout << std::endl;

            auto pre = bst.tour(-1);
            for (auto k : pre) std::cout << " " << k;
            std::cout << std::endl;
        }
    }
    return 0;
}

