#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<string,int> P;
struct node{
  node *next;
  P v;
  node(){next=NULL;}
  node(P v):v(v){next=NULL;}
};
struct mqueue{
  node *head,*cur;
  mqueue(){
    head=new node();
    cur=NULL;
  }
  void push(P v){
    node *tmp=new node(v);
    if(cur!=NULL) cur->next=tmp;
    cur=tmp;
    if(head->next==NULL) head->next=cur;
  }
  void pop(){
    if(head->next==NULL) return;
    node *tmp=head->next->next;
    if(tmp!=NULL) delete(head->next);
    head->next=tmp;
  }
  P front(){
    return head->next->v;
  }
  bool empty(){
    return head->next==NULL;
  }
};
signed main(){
  int n,q;
  cin>>n>>q;
  string name[n];
  int time[n];
  for(int i=0;i<n;i++) cin>>name[i]>>time[i];
  int cur=0;
  mqueue que;
  for(int i=0;i<n;i++) que.push(P(name[i],time[i]));
  while(!que.empty()){
    P p=que.front();que.pop();
    if(p.second<=q){
      cur+=p.second;
      cout<<p.first<<" "<<cur<<endl;
      continue;
    }
    p.second-=q;
    cur+=q;
    que.push(p);
  }
  return 0;
}