#include <iostream>
using namespace std;


struct Node {
    int id;
    int parentId;
    int leftId;
    int rightId;
};


class BinaryTree {

public:
    static const int NIL_ID = -1;
    Node *nodes;

    BinaryTree(int cnt) {
        nodes = (Node *)malloc(sizeof(Node) * cnt);
        for (int i = 0; i < cnt; i++)
        {
            nodes[i] = Node{i, NIL_ID, NIL_ID, NIL_ID};
        }
    }

    ~BinaryTree() {
        delete nodes;
    }

    void push_values(int id, int leftId, int rightId) {
        nodes[id].leftId = leftId;
        nodes[id].rightId = rightId;

        if (leftId != NIL_ID)
            nodes[leftId].parentId = id;
        if (rightId != NIL_ID)
            nodes[rightId].parentId = id;
    }

    void printPreorder(int id) {
        if (id == NIL_ID)
            return;
        cout << " " << id;
        printPreorder(nodes[id].leftId);
        printPreorder(nodes[id].rightId);
    }

    void printInorder(int id) {
        if (id == NIL_ID)
            return;
        printInorder(nodes[id].leftId);
        cout << " " << id;
        printInorder(nodes[id].rightId);
    }

    void printPostorder(int id) {
        if (id == NIL_ID)
            return;
        printPostorder(nodes[id].leftId);
        printPostorder(nodes[id].rightId);
        cout << " " << id;
    }

    int findRootId() {
        Node node = nodes[0];
        int parentId = node.parentId;
        while (parentId != NIL_ID) {
            node = nodes[parentId];
            parentId = node.parentId;
        }
        return node.id;
    }
};


int main() {
    int N;
    int i, id, leftId, rightId;

    cin >> N;

    BinaryTree tree = BinaryTree(N);

    for (i = 0; i < N; i++) {
        cin >> id >> leftId >> rightId;
        tree.push_values(id, leftId, rightId);
    }

    int rootId = tree.findRootId();

    cout << "Preorder" << endl;
    tree.printPreorder(rootId);
    cout << endl;
    cout << "Inorder" << endl;
    tree.printInorder(rootId);
    cout << endl;
    cout << "Postorder" << endl;
    tree.printPostorder(rootId);
    cout << endl;

    return 0;
}

