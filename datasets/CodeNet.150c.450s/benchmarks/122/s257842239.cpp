#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdio>

using namespace std;

template<class T>
struct LeftistHeap {

private:

  struct node{
    node *lch,*rch;
    int s;
    T val;
    node(T val):val(val){ lch=rch=NULL; }
  } *root;

public:

  LeftistHeap(){root=NULL;}

  node *meld(node *a,node *b){
    if(!a || !b)return a?a:b;
    if(a->val < b->val)swap(a,b);
    a->rch=meld(a->rch,b);
    if(!a->lch || a->lch->s < a->rch->s)swap(a->lch,a->rch);
    a->s=(!a->rch?0:a->rch->s)+1;
    return a;
  }

  void push(T x){ root=meld(root,new node(x)); }
  
  void pop(){
    node *tmp=root;
    root=meld(root->rch,root->lch);
    delete tmp;
  }

  T top(){ return root->val; }
  bool empty(){ return !root; }
  void clear(){ while(!empty())pop(); }
};

int main(void){

  LeftistHeap<int> que;
  //string com;
  char ch[10];
  int k;

  //while(cin >> com,com!="end"){
  while(true){
    scanf(" %s",ch);
    if(ch[2]=='d')break;
    if(ch[0]=='i'){
      scanf("%d",&k);
      que.push(k);
    } else {
      printf("%d\n",que.top());
      que.pop();
    }
  }

  return 0;
}