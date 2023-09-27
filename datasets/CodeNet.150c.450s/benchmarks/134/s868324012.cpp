#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

class BinTree {
private:
    vector<vector<int>> adjlist, invlist;
    bool hasParent(int node);
    int getParent(int node);
    bool hasLeftChild(int node);
    bool hasRightChild(int node);
    int getLeftChild(int node);
    int getRightChild(int node);
    
public:
    BinTree(int n);
    void addChild(int parent, int child);
    int getRoot();
    void preorder(int node);
    void inorder(int node);
    void postorder(int node);
};

BinTree::BinTree(int n) {
    REP(i,n) {
        vector<int> v;
        adjlist.push_back(v);
        invlist.push_back(v);
    }
}

void BinTree::addChild(int parent, int child) {
    adjlist[parent].push_back(child);
    if (child != -1) {
        invlist[child].push_back(parent);
    }
}

bool BinTree::hasParent(int node) {
    if (invlist[node].empty()) return false;
    return true;
}

int BinTree::getParent(int node) {
    return invlist[node][0];
}

int BinTree::getRoot() {
    REP(i,invlist.size()) {
        if (invlist[i].size() == 0) return i;
    }
    return -1;
}

bool BinTree::hasLeftChild(int node) {
    if (adjlist[node][0] != -1) return true;
    return false;
}

bool BinTree::hasRightChild(int node) {
    if (adjlist[node][1] != -1) return true;
    return false;
}

int BinTree::getLeftChild(int node) {
    return adjlist[node][0];
}

int BinTree::getRightChild(int node) {
    return adjlist[node][1];
}

void BinTree::preorder(int node) {
    cout << " " << node;
    if (hasLeftChild(node)) {
        preorder(getLeftChild(node));
    }
    if (hasRightChild(node)) {
        preorder(getRightChild(node));
    }
}

void BinTree::inorder(int node) {
    if (hasLeftChild(node)) {
        inorder(getLeftChild(node));
    }
    cout << " " << node;
    if (hasRightChild(node)) {
        inorder(getRightChild(node));
    }
}

void BinTree::postorder(int node) {
    if (hasLeftChild(node)) {
        postorder(getLeftChild(node));
    }
    if (hasRightChild(node)) {
        postorder(getRightChild(node));
    }
    cout << " " << node;
}

int main() {
    int n;
    cin >> n;
    BinTree binTree = BinTree(n);
    REP(i,n) {
        int node, child1, child2;
        cin >> node >> child1 >> child2;
        binTree.addChild(node, child1);
        binTree.addChild(node, child2);
    }
    int root = binTree.getRoot();
    cout << "Preorder" << endl;
    binTree.preorder(root);
    cout << endl << "Inorder" << endl;
    binTree.inorder(root);
    cout << endl << "Postorder" << endl;
    binTree.postorder(root);
    cout << endl;
    return 0;
}