#include <iostream>
#include <vector>

using namespace std;

struct Node {
  int id;
  int parent;
  int left;
  int right;

  Node() : id(), parent(-1), left(-1), right(-1) {}
  };

static vector<Node> TREE(25);

static void inputNode(Node& node, int id) {
  node.id = id;
  cin >> node.left >> node.right;
}

static const Node& getRoot(const vector<Node>& tree, int num) {
  for (int i = 0; i < num; i++) {
    if (tree[i].parent == -1) {
      return tree[i];
    } 
  }
}

static void getNextPreorder(const vector<Node>& tree, const Node& node) {
  if (node.id == -1) {
    return;
  }

  cout << " " << node.id;
  
  if (node.left != -1) {
    getNextPreorder(tree, tree[node.left]);
  }

  if (node.right != -1) {
    getNextPreorder(tree, tree[node.right]);
  }
}

static void preorderTreeWalk(const vector<Node>& tree, const Node& root) {
  cout << "Preorder" << endl;
  getNextPreorder(tree, root);
  cout << endl;
}

static void getNextInorder(const vector<Node>& tree, const Node& node) {
  if (node.id == -1) {
    return;
  }
  
  if (node.left != -1) {
    getNextInorder(tree, tree[node.left]);
  }

  cout << " " << node.id;

  if (node.right != -1) {
    getNextInorder(tree, tree[node.right]);
  }
}

static void inorderTreeWalk(const vector<Node>& tree, const Node& root) {
  cout << "Inorder" << endl;
  getNextInorder(tree, root);
  cout << endl;
}

static void getNextPostorder(const vector<Node>& tree, const Node& node) {
  if (node.id == -1) {
    return;
  }
  
  if (node.left != -1) {
    getNextPostorder(tree, tree[node.left]);
  }

  if (node.right != -1) {
    getNextPostorder(tree, tree[node.right]);
  }

  cout << " " << node.id;
}

static void postorderTreeWalk(const vector<Node>& tree, const Node& root) {
  cout << "Postorder" << endl;
  getNextPostorder(tree, root);
  cout << endl;
}

static void setupTree(vector<Node>& tree, int num) {
  for (int i = 0; i < num; i++) {
    Node& node = tree[i];
    if (node.left != -1) {
      tree[node.left].parent = node.id;
    }
    if (node.right != -1) {
      tree[node.right].parent = node.id;
    }
  }
}

int main() {
  int n;
  cin >> n;

  int id;
  for (int i = 0; i < n; i++) {
    cin >> id;
    inputNode(TREE[id], id);
  }

  setupTree(TREE, n);
  const Node root = getRoot(TREE, n);

  preorderTreeWalk(TREE, root);
  inorderTreeWalk(TREE, root);
  postorderTreeWalk(TREE, root);

  return 0;
}

