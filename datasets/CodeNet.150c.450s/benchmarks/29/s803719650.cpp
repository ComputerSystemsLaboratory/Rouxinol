#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
struct node{
  node *pre, *next;
  int key;
};

node *head;

node * find(int x){
  node *ima=head->next;
  while(ima->key!=x&&ima!=head) ima=ima->next;
  return ima;
}

void mk_node(int key,node *next,node *prev){
  node *n=(node *)malloc(sizeof(node));
  n->key=key;
  n->next=next;
  n->pre=prev;
  next->pre=n;
  prev->next=n;
}

void insert(int x){mk_node(x,head->next,head);}

void del(int x){
  node *del=find(x);
  if(del->key!=x) return;
  del->pre->next=del->next;
  del->next->pre=del->pre;
  free(del);
}

void delF(){
  node *del=head->next;
  if(del==head) return;
  del->next->pre=head;
  head->next=del->next;
  free(del);
}

void delL(){
  node *del=head->pre;
  if(del==head)return;
  del->pre->next=head;
  head->pre=del->pre;
  free(del);
}


char str[1000];

int main(){
  head=(node *)malloc(sizeof(node *));
  head->next=head;
  head->pre=head;
  head->key=-1;

  int n;
  cin>>n;
  while(n--){

    int a;
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&a);
      insert(a);
    }

    if(str[0]=='d'&&strlen(str)==6){
      scanf("%d",&a);
      del(a);
    }else{
      if(str[6]=='F')delF();
      if(str[6]=='L')delL();
    }
  }
  
  node *ima=head->next;
  while(ima->next!=head&&ima->key!=-1)cout <<ima->key<<" ",ima=ima->next;
  cout << ima->key<<endl;
  return 0;
}