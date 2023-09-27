#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
 
#define N 600000
#define NIL -1
 
//array
int key[N];
int parent[N];
int leftc[N];
int rightc[N];
//root
int root=NIL;
//function insert
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
 
//function search
int find(int now,int data){
  if(now==NIL||data==key[now]) return now;
  if(data<key[now]) return find(leftc[now],data);
  else return find(rightc[now],data);
}
 
//print
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
  //initialize array
  for(i=0;i<N;i++){
    parent[i]=NIL;
    key[i]=NIL;
    rightc[i]=NIL;
    leftc[i]=NIL;
  }
  //load n
  scanf("%d",&n);
  //load commnad and key
  for(i=0;i<n;i++){
    scanf("%s",str);
    if(strcmp(str,"insert")==0) {
      scanf("%d",&data);
      key[z]=data;
      insert(z);
      z++;
    }
    else if(strcmp(str,"find")==0){
      scanf("%d",&data);
      if(find(root,data)!=NIL) printf("yes\n");
      else printf("no\n");
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