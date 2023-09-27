#include <iostream>
using namespace std;
#define NI   -1
struct Node {
  int p = NI;
  int l = NI;
  int r = NI;
};

Node tree[30];

void preorder(int id) {
  if (id == NI) return;
  cout << " " << id;
  preorder(tree[id].l);
  preorder(tree[id].r);
}

void inorder(int id) {
  if (id == NI) return;
  inorder(tree[id].l);
  cout << " " << id;
  inorder(tree[id].r);
}

void postorder(int id) {
  if (id == NI) return;
  postorder(tree[id].l);
  postorder(tree[id].r);
  cout << " " << id;
}

int main() {
  int N; cin >> N;
 
  for (int i = 0; i < N; i++) {
    int id; cin >> id;
    cin >> tree[id].l >> tree[id].r;
    if (tree[id].l != NI) {
      tree[tree[id].l].p = id;
    }
    if (tree[id].r != NI) {
      tree[tree[id].r].p = id;
    }
  }

  // get root
  int root = 0;
  while (tree[root].p != NI) {
    root = tree[root].p;
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



