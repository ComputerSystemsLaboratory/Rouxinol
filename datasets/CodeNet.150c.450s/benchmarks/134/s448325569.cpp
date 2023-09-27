/**************
 *
 *ALDS_1_8_C
 *TreeWalk
 *
 *2020/07/17
 **************/

#include<stdio.h>

typedef struct{
  int parent;
  int left;
  int right;
} Node;

const int max_node = 25;

void print_preorder(Node *node,int node_id){

  printf(" %d",node_id);

  if(node[node_id].left != -1) print_preorder(node,node[node_id].left);
  if(node[node_id].right != -1) print_preorder(node,node[node_id].right);

  return;
}

void print_inorder(Node *node,int node_id){

  if(node[node_id].left != -1) print_inorder(node,node[node_id].left);
  printf(" %d",node_id);
  if(node[node_id].right != -1) print_inorder(node,node[node_id].right);

  return;
}

void print_postorder(Node *node,int node_id){

  if(node[node_id].left != -1) print_postorder(node,node[node_id].left);
  if(node[node_id].right != -1) print_postorder(node,node[node_id].right);
  printf(" %d",node_id);

  return;
}


int main(void){

  Node node[max_node];
  int n=0;
  int parent_id=-1;
  /*入力*/
  
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int id;
    int left,right;
    scanf("%d %d %d",&id,&left,&right);
    node[id].parent = -1;
    node[id].left = left;
    node[id].right = right;
  }

  /*処理*/

  //各ノードの親を調べる
  for(int i=0;i<n;i++){
    if(node[i].left != -1) node[node[i].left].parent = i;
    if(node[i].right != -1) node[node[i].right].parent = i;
  }
  //rootのノードを探す
  for(int i=0;i<n;i++){
    if(node[i].parent == -1){
      parent_id = i;
      break;
    }
  }
  
  /*出力*/
  puts("Preorder");
  print_preorder(node,parent_id);
  printf("\n");

  puts("Inorder");
  print_inorder(node,parent_id);
  printf("\n");

  puts("Postorder");
  print_postorder(node,parent_id);
  printf("\n");
  
  return 0;
}

