#include <bits/stdc++.h>

#define NIL -1
using namespace std;

struct Node{
    int current_node,parent_node,left_child,right_child,sibling_node;
    int depth,height;
};

void preOrder(const vector<Node> &Tree,int current_node){
    printf(" %d",current_node);
    if(Tree[current_node].left_child != NIL) preOrder(Tree,Tree[current_node].left_child);
    if(Tree[current_node].right_child!= NIL) preOrder(Tree,Tree[current_node].right_child);
}

void inOrder(const vector<Node> &Tree,const int current_node){
   if(current_node == NIL) return;
   inOrder(Tree,Tree[current_node].left_child);
   printf(" %d",current_node);
   inOrder(Tree,Tree[current_node].right_child);
}

void postOrder(const vector<Node> &Tree,const int current_node){
    if(current_node == NIL) return;
    postOrder(Tree,Tree[current_node].left_child);
    postOrder(Tree,Tree[current_node].right_child);
    printf(" %d",current_node); 
}

int main(){
    int num_node;
    int current_node,left_child,right_child,degree;
    int root;
    string node_type;
    scanf("%d",&num_node);
    vector<Node> Tree(num_node,Node{NIL,NIL,NIL,NIL,NIL,NIL,NIL});

    for(int i = 0;i < num_node;i++){
        scanf("%d %d %d",&current_node,&left_child,&right_child);
        Tree[current_node].left_child  = left_child;
        Tree[current_node].right_child = right_child;
        Tree[right_child].parent_node  = current_node;
        Tree[left_child].parent_node   = current_node;
        Tree[right_child].sibling_node = left_child;
        Tree[left_child].sibling_node  = right_child;
    }
    for(int i = 0;i < num_node;i++){
        if(Tree[i].parent_node == -1) root = i;
    }
    printf("Preorder\n");
    preOrder(Tree,root);
    printf("\n");
    printf("Inorder\n");
    inOrder(Tree,root);
    printf("\n");
    printf("Postorder\n");
    postOrder(Tree,root);
    printf("\n");
    
    return 0;   
}

