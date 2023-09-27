#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;

struct node{
  int key;
  node *next;
  node *prev;
};

node *a;

void insert(int key){
  node *x = (node *)malloc(sizeof(node));
  x->key = key;
  x->next = a->next;
  a->next->prev = x;
  a->next = x;
  x->prev = a;
}

node *Searchlist(int key){
  node *search = a->next;
  while(search != a && search->key != key){
    search = search->next;
  }
  
  return search;
  
}

void init(){
  a = (node *)malloc(sizeof(node));
  a->next = a;
  a->prev = a;
}

void delNode(node *search){
  if(search == a) return;
  search->prev->next = search->next;
  search->next->prev = search->prev;
  free(search);
}

void delKey(int key){
  delNode(Searchlist(key));
}

void delFirst(){
  delNode(a->next);
}

void delLast(){
  delNode(a->prev);
}

void print(){
  node *out = a->next;
  int j = 0;

  while(1){
    if(out == a) break;
    if(j++ > 0) printf(" ");

    printf("%d", out->key);
    out = out->next;
  }

  printf("\n");
  
}

int main(){
  int n;
  scanf("%d", &n);
  
  int key;
  int cnt = 0;
  int p = 0;
  int d = 0;
  char s[50];
  
  init();
  
  for(int i = 0; i < n; i++){
    scanf("%s%d", s, &key);
    
    if(s[0] == 'i'){
      insert(key);
      p++;
      cnt++;
    }
    
    else if(s[0] == 'd'){
      
      if(strlen(s) > 7){
	if(s[6] == 'F') delFirst();

	else if(s[6] == 'L') delLast();
      }
      
      else{
	delKey(key);
	d++;
      }
    
      cnt--;
    }
  }

  print();
  
  return 0;
  
}

