#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;

int n;
struct node{
  node* next;
  node* prev;
  long value;
};

void del(node* p){
  p->prev->next = p->next;
  p->next->prev = p->prev;
  free(p);
  return;
}

int main(){
  scanf("%d",&n);
  node* first = (node*)malloc(sizeof(node));
  if(first==NULL) exit(-1);
  node* last = (node*)malloc(sizeof(node));
  if(first==NULL) exit(-1);
  first->prev = NULL;
  first->next = last;
  last->prev = first;
  last->next = NULL;
  for(int i=0;i<n;i++){
    char cmd[20];
    scanf("%s",cmd);
    if(strcmp(cmd,"insert")==0){
      long t;
      scanf("%ld",&t);
      node* p = (node*)malloc(sizeof(node));
      if(p==NULL) exit(-1);
      p->prev = first;
      p->next = first->next;
      p->value = t;
      first->next->prev = p;
      first->next = p;
    }
    else if(strcmp(cmd,"delete")==0){
      long t;
      scanf("%ld",&t);
      node* now = first->next;
      while(now->value!=t&&now!=last) now = now->next;
      if(now!=last) del(now);
    }
    else if(strcmp(cmd,"deleteFirst")==0){
      del(first->next);
    }
    else if(strcmp(cmd,"deleteLast")==0){
      del(last->prev);
    }
  }
  node* now = first;
  while(now->next!=last){
    printf("%ld",now->next->value);
    now = now->next;
    if(now->next!=last) printf(" ");
    else printf("\n");
  }
  return 0;
}