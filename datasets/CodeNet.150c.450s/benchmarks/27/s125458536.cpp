#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

#define N 4000000
#define NIL -1

int key[N];
int parent[N];
int leftc[N];
int rightc[N];

int root=NIL;
void insert(int z){
  int x,y;
  
  y=NIL;
  x=root;

  while(x!=NIL){
    y=x;
    if(key[z]<key[x]) x=leftc[x];
    else x=rightc[x];
  }  
  
  parent[z]=y;

  if(y==NIL) root=z;
    
  else if(key[z]<key[y]) leftc[y]=z;
 
  else rightc[y]=z;
  
  
}

void inorderprint(int now){
  if(now!=NIL){
    inorderprint(leftc[now]);
    printf(" %d",key[now]);
    inorderprint(rightc[now]);
  }
}

void preorderprint(int now){
  if(now!=NIL){
    printf(" %d",key[now]);
    preorderprint(leftc[now]);
    preorderprint(rightc[now]);
  }
}



int main(){

  int n,i,j,data;
  int z=0;
  char str[10];

  for(i=0;i<N;i++){
    parent[i]=NIL;
    key[i]=NIL;
    rightc[i]=NIL;
    leftc[i]=NIL;
  }

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",str);
    if(strcmp(str,"insert")==0) {
      scanf("%d",&data);
      key[z]=data;
      insert(z);
      z++;
    }
    else if(strcmp(str,"print")==0){
      inorderprint(root);
      cout <<endl;
      preorderprint(root);
      cout <<endl;
    }
  }

  return 0;
}