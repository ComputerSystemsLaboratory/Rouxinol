/*************
 *
 *ALDS1-9_A
 *Binary Search Tree
 *
 *2020/07/20
 *
 *************/
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  long long key;
  struct node* left;
  struct node* right;
} Node;

const int max_buffer = 32;

Node* createdNode(long long key){
  Node *new_node;
  new_node = (Node*)(calloc(1,sizeof(Node)));

  new_node->key = key;
  new_node->left = NULL;
  new_node->right = NULL;

  return new_node;
}

Node* insert(Node *T,Node *z){

  Node* current_node = T;

  if(current_node == NULL){
    T = z;
  }
  else{
    while(1){
      if(z->key < current_node->key){
	if(current_node->left != NULL) {
	  current_node = current_node->left;
	}
	else {
	  current_node->left = z;
	  break;
	}
      }
      else {
	if(current_node->right != NULL) {
	  current_node = current_node->right;
	}
	else {
	  current_node->right = z;
	  break;
	}
      }
    }
  }
  return T;
}

void print_inorder(Node *node){

  if(node->left != NULL) print_inorder(node->left);

  printf(" %lld",node->key);
  
  if(node->right != NULL) print_inorder(node->right);
}

void print_preorder(Node *node){

  
  printf(" %lld",node->key);
  
  if(node->left != NULL) print_preorder(node->left);
  if(node->right != NULL) print_preorder(node->right);

  return;
}

int main(void){
  int n;
  char string[max_buffer];
  char order[8];//最長命令数(=6)と'\0'
  long long key=0;
  Node *root = NULL;
  Node *input_node =NULL;
  
  fgets(string,sizeof(string),stdin);
  sscanf(string,"%d",&n);
  
  for(int i=0;i<n;i++){
    
    fgets(string,sizeof(string),stdin);
    sscanf(string,"%s %lld",order,&key);

    switch(string[0]){
    case 'i':
      input_node = createdNode(key);
      root = insert(root,input_node);
      break;
    case 'p':
      if(root != NULL){
	print_inorder(root);
	printf("\n");
	print_preorder(root);
	printf("\n");
      }
      break;
    default:
      printf("\"%s\" is error.",string);
      break;
    }
  }
  return 0;
}

