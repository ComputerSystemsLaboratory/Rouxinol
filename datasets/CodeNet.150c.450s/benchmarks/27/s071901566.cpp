#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
int key;
struct node *left, *right;
};
  

struct node *newNode(int item)
{
struct node *temp =  (struct node *)malloc(sizeof(struct node));
temp->key = item;
temp->left = temp->right = NULL;
return temp;
}
  

void Preorder(struct node* root)
{
static int hit=0;

if (root == NULL)
  return;
 

  printf(" ");
printf("%d",root->key);
hit=1;
Preorder(root->left); 
 
   
Preorder(root->right);
} 

void inorder(struct node *root)
{
static int h=0;

if (root != NULL)
  {

inorder(root->left);

printf(" ");
printf("%d", root->key);
h=1;
inorder(root->right);
}
}
  

struct node* insert(struct node* node, int key)
{
    
if (node == NULL) return newNode(key);
 
   
if (key < node->key)
  node->left  = insert(node->left, key);
 else if (key > node->key)
   node->right = insert(node->right, key);   
 
   
return node;
}
  

int main()
{
int z,n,i;
char str[7];
   
struct node *root = NULL;
scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%s",str);
if(strcmp(str,"insert")==0)
  scanf("%d",&z);
if(i==0)
  root = insert(root, z);
 else insert(root, z);

if(strcmp(str,"print")==0){
  
    
   
inorder(root);
printf("\n");
Preorder(root);
printf("\n");
}}
return 0;
}

