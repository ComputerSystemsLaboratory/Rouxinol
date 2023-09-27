// ALDS1_7_C Tree Walk
#include <iostream>
#include <vector>
#define NIL -1

struct Node {
    int parent = NIL;
    int L_child = NIL;
    int R_child = NIL;
};

std::vector<Node> tree;

void SetNodeRelation(int node_num, int L_child, int R_child) {
    if (L_child != NIL) {
        tree.at(node_num).L_child = L_child;
        tree.at(L_child).parent = node_num;
    }
    if (R_child != NIL) {
        tree.at(node_num).R_child = R_child;
        tree.at(R_child).parent = node_num;
    }
}

int GetRoot() {
    int root = NIL;
    int tmp = 0;
    while (true) {
        if (tree.at(tmp).parent == NIL) {
            root = tmp;
            break;       
        } else {
            tmp = tree.at(tmp).parent;
        }
    }
    return root;
}

void PreorderTreeWalk(int node_num) {
    int L_child = tree.at(node_num).L_child;
    int R_child = tree.at(node_num).R_child;

    std::cout << " " << node_num;
    if (L_child != NIL) /* -> */ PreorderTreeWalk(L_child);
    if (R_child != NIL) /* -> */ PreorderTreeWalk(R_child);
}

void InorderTreeWalk(int node_num) {
    int L_child = tree.at(node_num).L_child;
    int R_child = tree.at(node_num).R_child;

    if (L_child != NIL) /* -> */ InorderTreeWalk(L_child);
    std::cout << " " << node_num;
    if (R_child != NIL) /* -> */ InorderTreeWalk(R_child);
}

void PostorderTreeWalk(int node_num) {
    int L_child = tree.at(node_num).L_child;
    int R_child = tree.at(node_num).R_child;

    if (L_child != NIL) /* -> */ PostorderTreeWalk(L_child);
    if (R_child != NIL) /* -> */PostorderTreeWalk(R_child);
    std::cout << " " << node_num;
}

int main() {
    int total;
    std::cin >> total;

    tree.resize(total);
    int node_num, L_child, R_child;
    for (int i=0; i<tree.size(); i++) {
        std::cin >> node_num >> L_child >> R_child;
        SetNodeRelation(node_num, L_child, R_child);
    }

    int root = GetRoot();
    std::cout << "Preorder" << "\n";
    PreorderTreeWalk(root);
    std::cout << "\n";

    std::cout << "Inorder" << "\n";
    InorderTreeWalk(root);
    std::cout << "\n";
    
    std::cout << "Postorder" << "\n";
    PostorderTreeWalk(root);
    std::cout << "\n";

}
