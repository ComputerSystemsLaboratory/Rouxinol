#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdio>

using namespace std;

template<class T>
struct SkewHeap {

private:

  struct node{
    node *lch,*rch;
    T val;
    node(T val):val(val){ lch=rch=NULL; }
  } *root;


public:

  SkewHeap(){root=NULL;}

  node *meld(node *a,node *b){
    if(!a || !b)return a?a:b;
    if(a->val < b->val)swap(a,b);
    a->rch=meld(a->rch,b);
    swap(a->lch,a->rch);
    return a;
  }

  void push(T x){ root=meld(root,new node(x)); }
  
  void pop(){
    //node *tmp=root;
    root=meld(root->rch,root->lch);
    //delete tmp;
  }

  T top(){ return root->val; }
  bool empty(){ return !root; }
  void clear(){ while(!empty())pop(); }
};

int main(void){

  SkewHeap<int> que;
  char ch[10];
  int k;

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