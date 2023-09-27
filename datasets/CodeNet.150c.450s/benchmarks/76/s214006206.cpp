#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#define NIL -1
#define MAX 500000
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
int n;
int root;
int *p = new int[MAX];       //    p---|  Unit
int *left2 = new  int[MAX]; // left2 --|--------> T
int *right2 = new int[MAX]; //right2---|
int *key = new int[MAX];     // key----|
    
void Init(){
  rep(i,MAX){
    p[i]=left2[i]=right2[i]=key[i]=NIL;
  }
}
    
bool SEARCH(int x,int k){
  if(k == key[x])return true;
  if(x == NIL)return false;
  if(k < key[x])return SEARCH(left2[x],k);
  else return SEARCH(right2[x],k);
}
   
    
void TREE_INSERT(int z){
  int y = NIL;
  int x = root;
    
  while(x != NIL){
    y = x;
    if(key[z] < key[x]){
      x = left2[x];
    }
    else x = right2[x];
  }
  p[z]=y;
  if(y == NIL){
    root = z;
  }
  else if(key[z] < key[y]){
    left2[y] = z;
  }else{
    right2[y] = z;
  }
    
}
    
void InorderTreeWalk(int x){
  if(x != NIL){
    InorderTreeWalk(left2[x]);
    printf(" %d",key[x]);
    InorderTreeWalk(right2[x]);
  }
}
    
void PreorderTreeWalk(int x){
  if(x != NIL){
    printf(" %d",key[x]);
    PreorderTreeWalk(left2[x]);
    PreorderTreeWalk(right2[x]);
  }
}
    
    
int main(){
  int val;
  string op;
  long long zr;                   
    
    
  scanf("%d",&n);
  Init();
  root = -1;
  zr=0;
  while(n-- > 0){
    cin >> op;
    if(op == "insert"){
      scanf("%d",&val);
      key[zr]=val;       
      TREE_INSERT(zr);
      zr++;
    }else if(op == "print"){
      InorderTreeWalk(root);
      printf("\n");
      PreorderTreeWalk(root);
      printf("\n");
    }
    else if(op == "find"){
      scanf("%d",&val);
      if(SEARCH(root,val)){
    printf("yes\n");
      }else{
    printf("no\n");
      }
          
    
    }
  }
    
  delete [] p;
  delete [] left2;
  delete [] right2;
  delete [] key;
   
  return 0;
}

