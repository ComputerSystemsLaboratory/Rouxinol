#include<iostream>
#include<cstdio>

using namespace std;

#define N 26
#define NIL -1

//array
int parent[N];
int leftc[N];
int rightc[N];
int root;
void Preorder(int now){
  if(now!=NIL){
    printf(" %d",now);
    Preorder(leftc[now]);
    Preorder(rightc[now]);
  }
}

void Inorder(int now){
  if(now!=NIL){
    Inorder(leftc[now]);
    printf(" %d",now);
    Inorder(rightc[now]);
  }
}

void Postorder(int now){
  if(now!=NIL){
    Postorder(leftc[now]);
    Postorder(rightc[now]);
    printf(" %d",now);
  }
}

int main(){
  int i,j,n;
  int id,child1,child2;

  //load data
  scanf("%d",&n);
  
  //initialize
  for(i=0;i<N;i++){
    parent[i]=NIL;
    leftc[i]=NIL;
    rightc[i]=NIL;
  }

  for(i=0;i<n;i++){
    
    //load data
    scanf(" %d %d %d",&id,&child1,&child2);

    //set parent
    parent[child1]=id;
    parent[child2]=id;
    
    //set left right
    leftc[id]=child1;
    rightc[id]=child2;
    
  }
  for(i=0;i<n;i++){
    if(parent[i]==NIL){
      root=i;
      break;
    }
  }
  //cout <<root<<endl;
  printf("Preorder\n");
  Preorder(root);
  printf("\n");
  printf("Inorder\n");
  Inorder(root);
  printf("\n");
  printf("Postorder\n");
  Postorder(root);
  printf("\n");
  return 0;
}