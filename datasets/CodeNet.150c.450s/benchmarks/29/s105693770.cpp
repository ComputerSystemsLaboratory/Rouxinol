#include<iostream>
#include<stdlib.h>
#include<cstdio>
using namespace std;

struct node{
  int key;
  node *prev,*next;
};

node *nil;

void init(){
  nil= (node *)malloc(sizeof(node));
  nil->next =nil;
  nil->prev=nil;
}

void insert(int key){
  node *x= (node *)malloc(sizeof(node));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

node* search(int key){
  node * cur;
  for(cur=nil->next;cur!=nil;cur=cur->next)if(cur->key==key) return cur;
  return cur;
}

void delnode(node *t){
  if(t==nil) return;
  t->prev->next=t->next;
  t->next->prev=t->prev;
  free(t);
}


void delFL(int n){
  if(n)  delnode(nil->next);
  else delnode(nil->prev);
}
	   
int main(){
  int n,key;
  cin>>n;
  char str[1000];
  init();
  for(int i=0;i<n;i++){
    scanf("%s",str);
    if(str[6]=='F') delFL(1);
    else if(str[6]=='L') delFL(0);
    else{
      scanf("%d",&key);
      if(str[0]=='i')insert(key);
      else if(str[0]=='d') delnode(search(key));
    }
  }
  
  node * cur;
  for(cur=nil->next;cur->next!=nil;cur=cur->next) cout<<cur->key<<" ";
  cout<<cur->key<<endl;
   return 0;
}