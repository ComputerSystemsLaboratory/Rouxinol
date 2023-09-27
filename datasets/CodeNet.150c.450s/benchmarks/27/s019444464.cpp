#include <cstdio>
#include <cstring>
#include <cstdlib>

struct Node {
  int key;
  Node *left_child_ptr, *right_child_ptr;
};

struct Tree {
  Node *root;
};

Node *NULL_NODE;

void insert(Tree *tree, int key) {
  Node *new_node = (Node*)malloc(sizeof(Node));
  new_node->key = key;
  new_node->left_child_ptr = new_node->right_child_ptr = NULL_NODE;


  if(tree->root == NULL_NODE) {
    tree->root = new_node;
    return;
  }

  Node *target_node_ptr = tree->root;
  while(true) {
    if(key < target_node_ptr->key) {
      if(target_node_ptr->left_child_ptr == NULL_NODE) {
        break;
      }
      target_node_ptr = target_node_ptr->left_child_ptr;
    } else {
      if(target_node_ptr->right_child_ptr == NULL_NODE) {
        break;
      }

      target_node_ptr = target_node_ptr->right_child_ptr;
    }
  }

  if(new_node->key < target_node_ptr->key) {
    target_node_ptr->left_child_ptr = new_node;
  } else {
    target_node_ptr->right_child_ptr = new_node;
  }
}

void print_as_inorder_walk(Tree tree, Node *current_node) {
  if(current_node == NULL_NODE) {
    return;
  }

  print_as_inorder_walk(tree, current_node->left_child_ptr);
  printf(" %d", current_node->key);
  print_as_inorder_walk(tree, current_node->right_child_ptr);
}

void print_as_preorder_walk(Tree tree, Node *current_node) {
  if(current_node == NULL_NODE) {
    return;
  }

  printf(" %d", current_node->key);
  print_as_preorder_walk(tree, current_node->left_child_ptr);
  print_as_preorder_walk(tree, current_node->right_child_ptr);
}

int main() {
  int operation_num;
  Tree tree = {NULL_NODE};
  char operation[7];

  scanf("%d", &operation_num);

  for(int i = 0; i < operation_num; i++) {
    int key;
    scanf("%s", operation);

    if(0 == strncmp(operation, "insert", 7)) {
      scanf("%d", &key);

      insert(&tree, key);
    } else if (0 == strncmp(operation, "print", 6)) {
      print_as_inorder_walk(tree, tree.root);
      printf("\n");
      print_as_preorder_walk(tree, tree.root);
      printf("\n");
    }
  }
}

