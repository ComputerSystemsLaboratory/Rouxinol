#include <iostream>
#include <algorithm>
using namespace std;

class binaryTree{
  enum tag{ROOT, INTERNALNODE, LEAF};
  class node{
  public:
    tag t;
    int left, right, parent, sib;
    int degree, depth, height;
    node(){
      left = right = parent = sib = -1;
      degree = depth = height = 0;
    }
    void printNode(int id){
      cout << "node " << id << ": parent = " << parent << ", sibling = " << sib;
      cout << ", degree = " << degree << ", depth = " << depth << ", height = " << height << ", ";
      if(t==ROOT) cout << "root" << endl;
      else if(t==INTERNALNODE) cout << "internal node" << endl;
      else cout << "leaf" << endl;
    }
  };
public:
  binaryTree(int n){
    nodes = new node[n];
    num = n;
  }
  void printNodes(){
    for(int i=0; i<num; i++){
      nodes[i].printNode(i);
    }
  }
  int findroot(){
    for(int i=0; i<num; i++){
      if(nodes[i].parent==-1) return i;
    }
  }
  void prewalk(int root){
    cout << "Preorder" << endl;
    nodeprewalk(root);
    cout << endl;
  }
  void inwalk(int root){
    cout << "Inorder" << endl;
    nodeinwalk(root);
    cout << endl;
  }
  void postwalk(int root){
    cout << "Postorder" << endl;
    nodepostwalk(root);
    cout << endl;
  }
  void init(int i){
    initnode(&nodes[i]);
  }
  int num;
  node* nodes;
private:
  void initnode(node* n){
    int hl=0, hr=0;
    if(n->left != -1) {
      n->degree++;
      nodes[n->left].depth = n->depth+1;
      initnode(&nodes[n->left]);
      hl = nodes[n->left].height+1;
    }
    if(n->right != -1){
      n->degree++;
      nodes[n->right].depth = n->depth+1;
      initnode(&nodes[n->right]);
      hr = nodes[n->right].height+1;
    }
    n->height = max(hl, hr);
    if(n->parent == -1) n->t=ROOT;
    else if(n->left == -1 && n->right == -1) n->t=LEAF;
    else n->t=INTERNALNODE;
  }
  void nodeprewalk(int n){
    cout << " " << n;
    if(nodes[n].left != -1) nodeprewalk(nodes[n].left);
    if(nodes[n].right != -1) nodeprewalk(nodes[n].right);
  }
  void nodeinwalk(int n){
    if(nodes[n].left != -1) nodeinwalk(nodes[n].left);
    cout << " " << n;
    if(nodes[n].right != -1) nodeinwalk(nodes[n].right);
  }
  void nodepostwalk(int n){
    if(nodes[n].left != -1) nodepostwalk(nodes[n].left);
    if(nodes[n].right != -1) nodepostwalk(nodes[n].right);
    cout << " " << n;
  }
};

int main(){
  int n; cin >> n;

  binaryTree bt(n);
  int id, left, right;
  for(int i=0; i<n; i++){
    cin >> id >> left >> right;
    bt.nodes[id].left = left;
    bt.nodes[id].right = right;
    bt.nodes[left].parent = id;
    bt.nodes[right].parent = id;
    bt.nodes[left].sib = right;
    bt.nodes[right].sib = left;
  }

  int root = bt.findroot();
  bt.prewalk(root);
  bt.inwalk(root);
  bt.postwalk(root);

  return 0;
}

