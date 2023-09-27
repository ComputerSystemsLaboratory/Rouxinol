#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Node {
 public:
  int value = -1;
  int left = -1;
  int right = -1;
  explicit Node(int value)
    :value{value} {}
};

void print_inorder(vector<Node>&, int);
void print_preorder(vector<Node>&, int);

int main() {
  vector<Node> tree;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  string line;
 nextinp:
  while (getline(cin, line)) {
    if (line == "print") {
      if (!tree.size()) {
        cout << endl;
      } else {
        print_inorder(tree, 0); cout << endl;
        print_preorder(tree, 0); cout << endl;
      }
    } else if (line.substr(0, 4) == "find") {
      if (!tree.size()) {
        cout << "no\n";
        continue;
      } else {
        int curr = 0;
        int value = stoi(line.substr(5));
        while (curr != -1) {
          if (value == tree[curr].value) {
            cout << "yes\n";
            goto nextinp; 
          } else if (value < tree[curr].value) {
            curr = tree[curr].left;
          } else {
            curr = tree[curr].right;
          }
        }
        cout << "no\n";
      }
    } else { // insert
      int value = stoi(line.substr(7));
      tree.push_back(Node(value));
      if (tree.size() == 1) continue;
      int curr = 0;
      int prev = 0;
      while (curr != -1) {
        if (value < tree[curr].value) {
          prev = curr;
          curr = tree[curr].left;
        } else if (value > tree[curr].value) {
          prev = curr;
          curr = tree[curr].right;
        }
      }
      if (value < tree[prev].value) {
        tree[prev].left = tree.size() - 1;
      } else {
        tree[prev].right = tree.size() - 1;
      }
    }
  }
}

void print_inorder(vector<Node>& tree, int curr) {
  if (tree[curr].left != -1) print_inorder(tree, tree[curr].left);
  cout << ' ' << tree[curr].value;
  if (tree[curr].right != -1) print_inorder(tree, tree[curr].right);
}

void print_preorder(vector<Node>& tree, int curr) {
  cout << ' ' << tree[curr].value;
  if (tree[curr].left != -1) print_preorder(tree, tree[curr].left);
  if (tree[curr].right != -1) print_preorder(tree, tree[curr].right);
}
