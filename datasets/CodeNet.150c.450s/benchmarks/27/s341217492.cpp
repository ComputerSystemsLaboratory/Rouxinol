#include<bits/stdc++.h>
using namespace std;

const int OP_LEN = 20;

typedef struct _node {
  int num;
  struct _node *left;
  struct _node *right;
} node;

node *tree = NULL;

node *make_node(int num)
{
  node *v = (node *)malloc(sizeof(node));
  v->num = num;
  v->left = NULL;
  v->right = NULL;
  return v;
}

void insert_body(node *tree, int num)
{
  node *l = tree->left;
  node *r = tree->right;
  if (num <= tree->num) {
    if (l == NULL)
      tree->left = make_node(num);
    else
      insert_body(l, num);
  } else {
    if (r == NULL)
      tree->right = make_node(num);
    else
      insert_body(r, num);
  }
}

void insert(int num)
{
  if (tree == NULL)
    tree = make_node(num);
  else
    insert_body(tree, num);
}

void print_tree(node *tree)
{
  if (tree == NULL) {
    printf("*");
  } else {
    printf("(%d ", tree->num);
    print_tree(tree->left);
    printf(" ");
    print_tree(tree->right);
    printf(")");
  }
}

void inorder(node *tree)
{
  if (tree == NULL) return;
  inorder(tree->left);
  printf(" %d", tree->num);
  inorder(tree->right);
}

void preorder(node *tree)
{
  if (tree == NULL) return;
  printf(" %d", tree->num);
  preorder(tree->left);
  preorder(tree->right);
}

void print()
{
  // print_tree(tree); printf("\n");
  inorder(tree); printf("\n");
  preorder(tree); printf("\n");
}

int main()
{
  int n; scanf("%d", &n);
  while (n--) {
    char op[OP_LEN]; scanf("%s", op);
    if (op[0] == 'i') {
      int num; scanf("%d", &num);
      insert(num);
    } else {
      print();
    }
  }
  return EXIT_SUCCESS;
}


