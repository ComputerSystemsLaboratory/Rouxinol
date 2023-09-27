#include <iostream>
#include <string>
using namespace std;

struct Node{
  int id;
  int parent;
  int left;
  int right;
  int sibling;
  int deg;
  int depth;
  int height;
  string type;
};

class BinaryTree{
public:
  BinaryTree(int a){
    n = a;
    T = new Node[n];
    for(int i=0;i<n;i++) T[i].parent = -1;
  }
  ~BinaryTree(){delete [] T;}
  void setId(int x, int u){T[x].id = u;}
  void setLeft(int x, int u){T[x].left = u;}
  void setRight(int x, int u){T[x].right = u;}
  void plusDeg(int x){T[x].deg++;}
  int setHeight(int x);
  void setDepth(int x, int d);
  int getSibling(int x);
  void print(int x);
  void Preorder(Node T[], int x);
  void Inorder(Node T[], int x);
  void Postorder(Node T[], int x);

  int n;
  Node *T;
};

int BinaryTree::setHeight(int x){
  int h1 = 0, h2 = 0;
  if(T[x].left != -1) h1 = setHeight(T[x].left) + 1;
  if(T[x].right != -1) h2 = setHeight(T[x].right) + 1;
  return T[x].height = max(h1, h2);
}

void BinaryTree::setDepth(int x, int d){
  T[x].depth = d;
  if(T[x].left != -1) setDepth(T[x].left, d + 1);
  if(T[x].right != -1) setDepth(T[x].right, d + 1);
}

int BinaryTree::getSibling(int x){
  if(T[x].parent == -1) return -1;
  if(T[T[x].parent].left != -1 && T[T[x].parent].left != x)
    return T[x].sibling = T[T[x].parent].left;
  else if(T[T[x].parent].right != -1 && T[T[x].parent].right != x)
    return T[x].sibling = T[T[x].parent].right;
  return -1;
}

void BinaryTree::print(int x){
  cout << "node " << T[x].id << ": ";
  cout << "parent = " << T[x].parent << ", ";
  cout << "sibling = " << getSibling(x) << ", ";
  cout << "degree = " << T[x].deg << ", ";
  cout << "depth = " << T[x].depth << ", ";
  cout << "height = " << T[x].height << ", ";
  cout << T[x].type << endl;
}

void BinaryTree::Preorder(Node T[], int x){
  cout << " " << x;
  if(T[x].left != -1) Preorder(T, T[x].left);
  if(T[x].right != -1) Preorder(T, T[x].right);
  return;
}

void BinaryTree::Inorder(Node T[], int x){
  if(T[x].left != -1) Inorder(T, T[x].left);
  cout << " " << x;
  if(T[x].right != -1) Inorder(T, T[x].right);
  return;
}

void BinaryTree::Postorder(Node T[], int x){
  if(T[x].left != -1) Postorder(T, T[x].left);
  if(T[x].right != -1) Postorder(T, T[x].right);
  cout << " " << x;
  return;
}

int main(){
  int n;
  cin >> n;
  BinaryTree tree(n);
  int root;
  for(int i=0;i<n;i++){
    int id, l, r;
    cin >> id >> l >> r;
    tree.setId(id, id);
    tree.setLeft(id, l);
    tree.setRight(id, r);
    if(l != -1){
      tree.T[l].parent = id;
      tree.plusDeg(id);
    }
    if(r != -1){
      tree.T[r].parent = id;
      tree.plusDeg(id);
    }
  }

  for(int i=0;i<n;i++){
    if(tree.T[i].parent == -1){
      root = i;
      tree.T[i].type = "root";
    }
    else if(tree.T[i].deg == 0) tree.T[i].type = "leaf";
    else tree.T[i].type = "internal node";
  }
  tree.setDepth(root, 0);
  tree.setHeight(root);

  // for(int i=0;i<n;i++){
  //   tree.print(i);
  // }
  cout << "Preorder" << endl;
  tree.Preorder(tree.T, root);
  cout << endl;
  cout << "Inorder" << endl;
  tree.Inorder(tree.T, root);
  cout << endl;
  cout << "Postorder" << endl;
  tree.Postorder(tree.T, root);
  cout << endl;
  return 0;
}

