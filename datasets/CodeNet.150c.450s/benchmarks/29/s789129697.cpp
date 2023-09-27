#include<iostream>
#include<stdlib.h>
//copy from http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=929835#1
using namespace std;
  
struct Node{
  int key;
  Node* next;
  Node* prev;
};
  
struct List{
  Node* nil;
  
  void init(){
    nil=(Node*)malloc(sizeof(Node));
    nil->next=nil;
    nil->prev=nil;
    nil->key=0;
  }
  
  Node* find(int key){
    for(Node* i=nil->next;i!=nil;i=i->next){
      if(i->key==key)return i;
    }
    return nil;
  }
  
  void insert(Node *x){
    x->next=nil->next;
    nil->next->prev=x;
    nil->next=x;
    x->prev=nil;
  }
   
  void add(int x){
    Node* p = (Node*)malloc(sizeof(Node));
    p->key=x;
    insert(p);
  }
    
  void delete_x(int key){
    Node* x=find(key);
    if(x==nil)return;
    x->prev->next=x->next;
    x->next->prev=x->prev;
    free(x);
  }
    
  void deleteFirst(){
    Node* x = nil->next;
    x->prev->next=x->next;
    x->next->prev=x->prev;
    free(x);
  }
    
  void deleteLast(){
    Node* x = nil->prev;
    x->prev->next=x->next;
    x->next->prev=x->prev;
    free(x);   
  }
  
  void output(){
    int flg=0;
    for(Node* i=nil->next;i!=nil;i=i->next){
      if(flg)cout<<' ';
      cout<<i->key;
      flg=1;
    }
    cout<<endl;
  }
};
  
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  List list;
  list.init();
  int n,x;
  string str;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>str;
    if(str=="insert"){
      cin>>x;
      list.add(x);
    }else if(str=="delete"){
      cin>>x;
      list.delete_x(x);
    }else if(str=="deleteFirst"){
      list.deleteFirst();
    }else {
      list.deleteLast();
    }
  }
  //cout<<'-'<<endl;
  list.output();
}
