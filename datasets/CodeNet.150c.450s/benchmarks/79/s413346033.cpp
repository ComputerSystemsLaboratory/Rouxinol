#include <stdio.h>
#include<stdlib.h>
#define MAX 51
struct node{int x; struct node* next;};

void initcard(struct node *p){
  p = NULL;
  return;
}
struct node* push_card(struct node *p,int n){
  struct node *x;
  x = (struct node*)malloc(sizeof(struct node));
  x->x = n;
  x->next = p;
  p = x;
  return p;
}

struct node* cut(struct node *q,int p,int c){
  struct node *head,*tail,*b;
  int i;
  if(p==1)return q;
  head = q;
  //printf("%d",q->x);
  for(i=1;i<p-1;i++)q = q->next;
  tail = q;//一番下になる
  b = q->next;//一番上になる
  for(i=0;i<c;i++)q=q->next;
  tail->next = q->next;
  q->next = head;
  return b;
}

void c_free(struct node* p){
  struct node *a;
  while(p!=NULL){
    p = p->next;
    a = p;
    free(a);
  }
  return;
}
int main(){
  struct node *card;
  int i,j,n,r,p,c,m[MAX],str[MAX];
  scanf("%d %d",&n,&r);
  while(n){
    card = NULL;
    for(i=1;i<=n;i++)card = push_card(card,i);
    /*while(card!=NULL){
      printf("%d ",card->x);
      card=card->next;
    }
    printf("\n");*/
      for(j=0;j<r;j++){
        scanf("%d %d",&p,&c);
        card = cut(card,p,c);
        /*while(card!=NULL){
          printf("%d ",card->x);
          card=card->next;
        }
        printf("\n");*/
      }
      printf("%d\n",card->x);
      scanf("%d %d",&n,&r);
    }
      return 0;
}

