#include <iostream>
#include <vector>
using namespace std;

vector< pair < int, int > > nodes;
vector< bool > isChild;

void preorder(int id) {
  if (id != -1) {
    cout << ' ' << id;
    preorder(nodes[id].first);
    preorder(nodes[id].second);
  }
  return;
}

void inorder(int id) {
  static int total = 0;
  if (id != -1) {
    inorder(nodes[id].first);
    cout << ' ' << id;
    inorder(nodes[id].second);
  }
  return;
}

void postorder(int id) {
  static int total = 0;
  if (id != -1) {
    postorder(nodes[id].first);
    postorder(nodes[id].second);
    cout << ' ' << id;
  }
  return;
}

int main(int argc, char **argv) {
  ios_base::sync_with_stdio(false);
  int n, root;
  cin >> n;
  nodes = vector< pair < int, int > > (n, pair< int, int > (-1, -1));
  isChild = vector< bool > (n, false);
  for (int i = 0; i < n; i++) {
    int id, left, right;
    cin >> id >> left >> right;
    if (left != -1) {
      nodes[id].first = left;
      isChild[left] = true;
    }
    if (right != -1) {
      nodes[id].second = right;
      isChild[right] = true;
    }
  }
  for (int i = 0; i < n; i++) {
    if (!isChild[i]) {
      root = i;
      break;
    }
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
  return 0;
}

