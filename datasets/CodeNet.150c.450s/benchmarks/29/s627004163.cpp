#include<bits/stdc++.h>
using namespace std;
struct node{
  node *prev;
  int key;
  node *next;
};
node L;
node *nil=&L;

node* find(int x){
  node *i;
  for(i=nil;i->next->key!=x&&i->next!=nil;i=i->next);
  return i->next;
}
void del(int x){
  node *a;
  if(x==-1)a=nil->next;
  else if(x==-2)a=nil->prev;
  else a=find(x);
  if(a==nil)return;
  a->prev->next=a->next;
  a->next->prev=a->prev;
  free(a);
}
void in(int x){
  node *a;
  a=(node *)malloc(sizeof(node));
  a->next=nil->next;
  nil->next->prev=a;
  nil->next=a;
  a->prev=nil;
  a->key=x;
}
int main(){
  int n;
  string s;
  L.prev=nil,L.next=nil;
  scanf("%d\n",&n);
  while(n--){
    getline(cin,s);
    int t=0;
    for(int i=7;i<s.size();i++)t*=10,t+=s[i]-'0';
    if(s[0]=='i')in(t);
    else{
       if(s[6]=='F')del(-1);
      else if(s[6]=='L')del(-2);
      else del(t);
    } 
  }
  node *i;
  for(i=nil;i->next->next!=nil;i=i->next)cout<<i->next->key<<' ';
  cout<<i->next->key<<endl;
  return 0;
}