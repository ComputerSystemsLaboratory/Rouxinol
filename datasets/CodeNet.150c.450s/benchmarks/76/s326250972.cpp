#include <cstdio>
#include <cstring>
#include <cstdlib>

#define COMMAND_MAX_SIZE 8

struct Node {
  Node *left_child_ptr;
  Node *right_child_ptr;
  int key;
};

struct Tree {
  Node *root_ptr;
};


void insert(Tree *tree, int key) {
  Node *new_node_ptr = (Node *)malloc(sizeof(Node));
  new_node_ptr->key = key;
  new_node_ptr->left_child_ptr = NULL;
  new_node_ptr->right_child_ptr = NULL;

  if(tree->root_ptr == NULL) {
    tree->root_ptr= new_node_ptr;
    return;
  }

  Node *previous_node_ptr;
  Node *current_node_ptr = tree->root_ptr;
  while(true) {
    previous_node_ptr = current_node_ptr;
    if(key <= current_node_ptr->key) {
      current_node_ptr = current_node_ptr->left_child_ptr;
    } else {
      current_node_ptr = current_node_ptr->right_child_ptr;
    }

    if(current_node_ptr == NULL) {
      break;
    }
  }

  if(key <= previous_node_ptr->key) {
    previous_node_ptr->left_child_ptr = new_node_ptr;
  } else {
    previous_node_ptr->right_child_ptr = new_node_ptr;
  }
}

void print_as_inorder_walk(Tree tree, Node *current_node_ptr) {
  if(current_node_ptr == NULL) {
    return;
  }

  print_as_inorder_walk(tree, current_node_ptr->left_child_ptr);
  printf(" %d", current_node_ptr->key);
  print_as_inorder_walk(tree, current_node_ptr->right_child_ptr);
}

void print_as_preorder_walk(Tree tree, Node *current_node_ptr) {
  if(current_node_ptr == NULL) {
    return;
  }

  printf(" %d", current_node_ptr->key);
  print_as_preorder_walk(tree, current_node_ptr->left_child_ptr);
  print_as_preorder_walk(tree, current_node_ptr->right_child_ptr);;
}

void print(Tree tree, Node* current_node_ptr) {
  print_as_inorder_walk(tree, current_node_ptr);
  printf("\n");
  print_as_preorder_walk(tree, current_node_ptr);
  printf("\n");
}

bool find(Tree tree, int target_key) {
  if(tree.root_ptr == NULL) {
    return false;
  }

  Node *current_node_ptr = tree.root_ptr;
  while(true) {
    if(current_node_ptr->key == target_key) {
      return true;
    }

    if(target_key <= current_node_ptr->key ) {
      current_node_ptr = current_node_ptr->left_child_ptr;
    } else {
      current_node_ptr = current_node_ptr->right_child_ptr;
    }

    if(current_node_ptr == NULL) {
      break;
    }
  }

  return false;
}

int main() {
  int commpand_size;
  Tree tree = {NULL};

  scanf("%d", &commpand_size);

  for(int i = 0; i < commpand_size; i++) {
    char command[COMMAND_MAX_SIZE];

    scanf("%s", command);

    if(0 == strncmp(command, "insert", 7)) {
      int key;
      scanf("%d", &key);
      insert(&tree, key);
    } else if(0 == strncmp(command, "find", 4)) {
      int key;
      scanf("%d", &key);

      bool is_found = find(tree, key);

      if(is_found) {
        puts("yes");
      } else {
        puts("no");
      }

    } else if(0 == strncmp(command, "print", 5)) {
      print(tree, tree.root_ptr);
    }
  }
}

