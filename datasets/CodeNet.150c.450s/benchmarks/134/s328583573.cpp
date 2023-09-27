#include <iostream>
#include <vector>

class BinaryTree
{
private:
  struct Node
  {
    int parent;
    int left;
    int right;

    Node():
      parent(NIL),
      left(NIL),
      right(NIL)
    {}
  };

  static const int NIL = -1;
  std::vector<Node> Tree;

public:
  explicit BinaryTree(int n):
    Tree(n)
  {}

  void set(int id, int l, int r)
  {
    Tree.at(id).left = l;
    Tree.at(id).right = r;

    if (l != NIL)
      Tree.at(l).parent = id;
    if (r != NIL)
      Tree.at(r).parent = id;
  }

  int root()
  {
    int root = 0;

    std::vector<Node>::const_iterator it = Tree.begin();
    for (; it != Tree.end(); ++it)
    {
      if (it->parent == NIL)
        break;
      ++root;
    }

    return root;
  }

  void print_preorder(int id)
  {
    if (id == NIL)
      return;

    std::cout << ' ' << id;
    print_preorder(Tree.at(id).left);
    print_preorder(Tree.at(id).right);

    if (Tree.at(id).parent == NIL)
      std::cout << std::endl;
  }

  void print_inorder(int id)
  {
    if (id == NIL)
      return;

    print_inorder(Tree.at(id).left);
    std::cout << ' ' << id;
    print_inorder(Tree.at(id).right);

    if (Tree.at(id).parent == NIL)
      std::cout << std::endl;
  }

  void print_postorder(int id)
  {
    if (id == NIL)
      return;

    print_postorder(Tree.at(id).left);
    print_postorder(Tree.at(id).right);
    std::cout << ' ' << id;

    if (Tree.at(id).parent == NIL)
      std::cout << std::endl;
  }
};

int main()
{
  int n;
  std::cin >> n;

  BinaryTree tree(n);

  for (int i = 0; i < n; ++i)
  {
    int id, left, right;
    std::cin >> id >> left >> right;
    tree.set(id, left, right);
  }

  int root = tree.root();

  std::cout << "Preorder" << std::endl;
  tree.print_preorder(root);
  std::cout << "Inorder" << std::endl;
  tree.print_inorder(root);
  std::cout << "Postorder" << std::endl;
  tree.print_postorder(root);

  return 0;
}
