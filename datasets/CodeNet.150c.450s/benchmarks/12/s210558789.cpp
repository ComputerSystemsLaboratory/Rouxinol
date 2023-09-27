#include<stdio.h>
/*
  struct node{
  struct node* parent;
  struct node* left;
  struct node* right;
  int key;
  };
*/

void print (int,int);

#define N 10000

int H[N];

//#define NIL NULL

//struct node* heap[N];

int main(){ 
  int num;
  int i;

  scanf("%d",&num);

  for(i=1;i<=num;i++) {
    scanf("%d",&H[i]);
    //heap[i]->parent = NIL;
  }

  /*
    for(i=1;i*2+1<=num;i++){
    heap[i]->key = H[i];
    heap[H[i]]->left = H[i*2];
    heap[H[i]]->right = H[i*2+1];
    }
  */

  for(i=1;i<=num;i++) {
    print(i,num);
    printf("\n");
  }
  


  return 0;
}
    
    
void print(int i,int num){

  printf("node %d: ",i);
  printf("key = %d, ",H[i]);
  if(i/2 >= 1){
    printf("parent key = %d, ",H[i/2]);
  }
  if(i*2 <= num){
    printf("left key = %d, ",H[2*i]);
  }
  if((i*2+1) <= num){
    printf("right key = %d, ",H[2*i+1]);
  }
}


  

  

  

