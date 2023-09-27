#include <iostream>
using namespace std;

#define NIL -1

struct Node {
  int parent = NIL;
  int left = NIL;
  int right = NIL;
};

Node tree[30];

void preorder(int id) {
  if (id == NIL) return;
  cout << " " << id;
  preorder(tree[id].left);
  preorder(tree[id].right);
}

void inorder(int id) {
  if (id == NIL) return;
  inorder(tree[id].left);
  cout << " " << id;
  inorder(tree[id].right);
}

void postorder(int id) {
  if (id == NIL) return;
  postorder(tree[id].left);
  postorder(tree[id].right);
  cout << " " << id;
}

int main() {
  int N; cin >> N;
  
  for (int i = 0; i < N; i++) {
    int id; cin >> id;
    cin >> tree[id].left >> tree[id].right;
    if (tree[id].left != NIL) {
      tree[tree[id].left].parent = id;
    }
    if (tree[id].right != NIL) {
      tree[tree[id].right].parent = id;
    }
  }

  // get root
  int root = 0;
  while (tree[root].parent != NIL) {
    root = tree[root].parent;
  }

  cout << "Preorder" << endl;
  preorder(root);
  cout << endl;

  cout << "Inorder" << endl;
  inorder(root);
  cout << endl;

  cout << "Postorder" << endl;
  postorder(root);
  cout << endl;
}

