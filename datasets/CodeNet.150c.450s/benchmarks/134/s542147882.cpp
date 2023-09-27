#include <cstdio>
#define MAX_NODE_SIZE 25
#define NULL_INDEX -1

struct Node {
  int parent_index;
  int left_child_index;
  int right_child_index;
};

void init_tree(Node tree[], int size) {
  for(int i = 0; i < size; i++) {
    tree[i].parent_index = NULL_INDEX;
    tree[i].left_child_index = NULL_INDEX;
    tree[i].right_child_index = NULL_INDEX;
  }
}

void walk_preorder(Node tree[], int current_node_index) {
  Node current_node = tree[current_node_index];

  if(current_node_index == NULL_INDEX) {
    return;
  }

  printf(" %d", current_node_index);
  walk_preorder(tree, current_node.left_child_index);
  walk_preorder(tree, current_node.right_child_index);
}

void walk_inorder(Node tree[], int current_node_index) {
  Node current_node = tree[current_node_index];

  if(current_node_index == NULL_INDEX) {
    return;
  }

  walk_inorder(tree, current_node.left_child_index);

  printf(" %d", current_node_index);

  walk_inorder(tree, current_node.right_child_index);
}

void walk_postorder(Node tree[], int current_node_index) {
  Node current_node = tree[current_node_index];

  if(current_node_index == NULL_INDEX) {
    return;
  }

  walk_postorder(tree, current_node.left_child_index);
  walk_postorder(tree, current_node.right_child_index);

  printf(" %d", current_node_index);
}

int main() {
  int node_size;
  Node tree[MAX_NODE_SIZE];

  scanf("%d%*c", &node_size);
  init_tree(tree, node_size);

  for(int i = 0; i < node_size; i++) {
    int node_index, left_child_index, right_child_index;
    scanf("%d %d %d%*c", &node_index, &left_child_index, &right_child_index);

    tree[node_index].left_child_index = left_child_index;
    tree[node_index].right_child_index = right_child_index;

    if(left_child_index != NULL_INDEX) {
      tree[left_child_index].parent_index = node_index;
    }
    if(right_child_index != NULL_INDEX) {
      tree[right_child_index].parent_index = node_index;
    }
  }

  int root_index;
  for(int i = 0; i < node_size; i++) {
    if(tree[i].parent_index == NULL_INDEX) {
      root_index = i;
      break;
    }
  }


  printf("Preorder\n");
  walk_preorder(tree, root_index);
  printf("\n");

  printf("Inorder\n");
  walk_inorder(tree, root_index);
  printf("\n");

  printf("Postorder\n");
  walk_postorder(tree, root_index);
  printf("\n");
}

