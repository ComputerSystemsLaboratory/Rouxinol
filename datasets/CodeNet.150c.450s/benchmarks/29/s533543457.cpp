#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct jiedian{
  int key;
  jiedian *prev;
  jiedian *next;
};
jiedian *nil;

jiedian *sousuo(int key){
  jiedian *cur = nil->next;
  while(cur != nil && cur->key != key){
    cur = cur->next;
  }
  return cur;
}

void init(){
  nil=(jiedian *)malloc(sizeof(jiedian));
  nil->prev = nil;
  nil->next = nil;
}
void shuchu(){
  jiedian *cur = nil->next;
  int isf = 0;
  while(1){
    if(cur == nil)break;
    if(isf++ > 0)printf(" ");
    printf("%d",cur->key);
    cur = cur->next;
  }
  printf("\n");
}

void shanchu(jiedian *t){
  if(t == nil)return;
  t->prev->next = t->next;
  t->next->prev = t->prev;
  free(t);
}

void shanchu1(){
  shanchu(nil->next);
}

void shanchu2(){
  shanchu(nil->prev);
}

void shanchukey(int key){
  shanchu(sousuo(key));
}
void shuru(int key){
  jiedian *x=(jiedian *)malloc(sizeof(jiedian));
  x->key = key;
  x->next = nil->next;
  nil->next->prev = x;
  nil->next = x;
  x->prev = nil;
}

int main(){
  int key,n,i;
  char com[20];
  scanf("%d",&n);
  init();
  for(i = 0;i < n; i++){
    scanf("%s%d",com,&key);
    if(com[0] == 'i'){shuru(key);}
    else if(com[0] == 'd'){
      if(strlen(com) > 6){
        if(com[6] == 'F')shanchu1();
        else if(com[6] == 'L')shanchu2();
      }
      else{
        shanchukey(key);
      }

    }
  }
  shuchu();
  return 0;
}