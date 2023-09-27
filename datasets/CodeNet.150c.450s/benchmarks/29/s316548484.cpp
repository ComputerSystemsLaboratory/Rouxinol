#include<bits/stdc++.h>
using namespace std;
struct node{
  node *prev,*next;
  int v;
  node(){next=NULL;}
  node(int v):v(v){next=NULL;}
};
struct mlist{
  node *head,*tail;
  mlist(){
    head=new node();
    tail=new node();
    head->next=tail;
    tail->prev=head;
  }
  void push_front(int v){
    node *tmp=new node(v);
    tmp->next=head->next;
    tmp->next->prev=tmp;
    head->next=tmp;
    tmp->prev=head;
  }
  void pop_front(){
    if(head->next==tail) return;
    node *tmp=head->next->next;
    if(tmp!=NULL) delete(head->next);
    head->next=tmp;
    tmp->prev=head;
  }
  void pop_back(){
    if(tail->prev==head) return;
    node *tmp=tail->prev->prev;
    if(tmp!=NULL) delete(tail->prev);
    tail->prev=tmp;
    tmp->next=tail;
  }
  void erase(int x){
    for(node *it=head->next;it!=tail;it=it->next){
      if(it->v==x){
	it->prev->next=it->next;
	it->next->prev=it->prev;
	delete(it);
	break;
      }
    }
  }
  int front(){
    return head->next->v;
  }
  bool empty(){
    return head->next==NULL;
  }
  node *begin(){
    return head->next;
  }
  node *end(){
    return tail;
  }
};
signed main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  mlist l;
  for(int i=0;i<n;i++){
    string s;
    int x;
    cin>>s;
    if(s=="insert"||s=="delete") cin>>x;
    if(s=="deleteFirst"){
      l.pop_front();
      continue;
    }
    if(s=="deleteLast"){
      l.pop_back();
      continue;
    }
    if(s=="insert"){
      l.push_front(x);
      continue;
    }
    if(s=="delete"){
      l.erase(x);
      continue;
    }
  }
  bool f=0;
  for(node *it=l.begin();it!=l.end();it=it->next){
    if(f) cout<<" ";
    cout<<it->v;
    f=1;
  }
  cout<<endl;
  return 0;
}