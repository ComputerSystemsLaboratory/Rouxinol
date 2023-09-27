#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

struct node {
  int key;
  node *R,*L,*P;
};

node *rt,*nil;

node * find(node *u, int k){
  while(u != nil && k != u->key){
    if(k < u->key) u = u->L;
    else u = u->R;
  }
  return u;
}

void inst(int k){
  node *y = nil;
  node *x = rt;
  node *z;

  z = (node *)malloc(sizeof(node));
  z->key = k;
  z->L = nil;
  z->R = nil;

  while(x != nil){
    y = x;
    if(z->key < x->key){
      x = x->L;
    }else{
      x = x->R;
    }
  }

  z->P = y;
  if(y == nil){
    rt = z;
  }else{
    if(z->key < y->key){
      y->L = z;
    }else {
      y->R = z;
    }
  }
}

void indr(node *u){
  if(u == nil) return;
  indr(u->L);
  printf(" %d",u->key);
  indr(u->R);
}

void prodr(node *u){
  if(u == nil) return;
  printf(" %d",u->key);
  prodr(u->L);
  prodr(u->R);
}

int main(){
  int n,i,x;
  string cm;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    cin >> cm;
    if(cm[0] == 'f'){
      scanf("%d",&x);
      node *t = find(rt,x);
      if(t != nil) printf("yes\n");
      else printf("no\n");
    }else if(cm == "insert"){
      scanf("%d",&x);
      inst(x);
    }else if(cm == "print"){
      indr(rt);
      printf("\n");
      prodr(rt);
      printf("\n");
    }
  }
  
  return 0;
}

