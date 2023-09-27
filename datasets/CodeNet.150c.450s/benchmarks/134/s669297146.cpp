#include <cstdio>
#include <iostream>
#include <climits>
#include <cmath>
#include <utility>
#include <vector>
#include <string>

using namespace std;

class BinaryTree
{
  struct Node
  {
      int parent;
      int left;
      int right;
  };
public:
  int size;
  vector<Node> nodes;
  Node operator[](int i)
  {
    return nodes[i];
  }
  BinaryTree(int n)
  {
    size = n;
    nodes.resize(n);
    for(int i = 0; i < n; i++)
    {
      nodes[i].parent = -1;
      nodes[i].left = -1;
      nodes[i].right = -1;
    }
  }
  bool isRoot(int id)
  {
    return nodes[id].parent == -1;
  }
  void SetSibling(int id, int left, int right)
  {
    nodes[id].left = left;
    nodes[id].right = right;
    if(left != -1) nodes[left].parent = id;
    if(right != -1) nodes[right].parent = id;
    //cerr << id << endl;
  }
  int parent(int id)
  {
    return isRoot(id)?-1:nodes[id].parent;
  }
  int sibling(int id)
  {
    if(isRoot(id)) return -1;
    if(nodes[nodes[id].parent].left == id) return nodes[nodes[id].parent].right;
    else return nodes[nodes[id].parent].left;
  }
  int degree(int id)
  {
    return (nodes[id].left != -1) + (nodes[id].right != -1);
  }
  int depth(int id)
  {
    int x = id;
    int cnt = 0;
    while(x != -1)
    {
      x = nodes[x].parent;
      cnt++;
    }
    return cnt;
  }
  int height(int id)
  {
    if(id == -1) return -1;
    return max(height(nodes[id].left),height(nodes[id].right)) + 1;
  }
  char* printType(int id)
  {
    if(nodes[id].parent == -1)
      return (char *)"root";
    else if(nodes[id].left == -1 && nodes[id].right == -1)
      return (char *)"leaf";
    else return (char *)"internal node";
  }
  void printInfo(int id)
  {
    printf("node %d: ",id);
    printf("parent = %d, ",parent(id));
    printf("sibling = %d, ",sibling(id));
    printf("degree = %d, ",degree(id));
    printf("depth = %d, ",depth(id));
    printf("height = %d, ",height(id));
    printf("%s\n", printType(id));
  }
  void preParse(int id)
  {
    if(id == -1) return;
    printf(" %d",id);
    preParse(nodes[id].left);
    preParse(nodes[id].right);
  }
  void inParse(int id)
  {
    if(id == -1) return;
    inParse(nodes[id].left);
    printf(" %d",id);
    inParse(nodes[id].right);
  }
  void postParse(int id)
  {
    if(id == -1) return;
    postParse(nodes[id].left);
    postParse(nodes[id].right);
    printf(" %d",id);
  }
};

int main()
{
  int n; cin >> n;
  BinaryTree tree(n);
  for(int i = 0; i < n; i++)
  {
    int id, l, r;
    cin >> id >> l >> r;
    tree.SetSibling(id,l,r);
  }
  int root;
  for(int i = 0; i < n; i++)
  {
    if(tree[i].parent == -1) root = i;
  }
  cout << "Preorder" << endl;
  tree.preParse(root);
  cout << endl;
  cout << "Inorder" << endl;
  tree.inParse(root);
  cout << endl;
  cout << "Postorder" << endl;
  tree.postParse(root);
  cout << endl;
}