#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
  node* prev;
  int v;
  node(){}
  node(int v):v(v){}
};
struct mstack{
  node *cur;
  mstack(){
    cur=NULL;
  }
  void push(int k){
    node *tmp=new node(k);
    tmp->prev=cur;
    cur=tmp;
  }
  void pop(){
    node *tmp=cur->prev;
    delete(cur);
    cur=tmp;
  }
  int top(){
    return cur->v;
  }
};
signed main(){
  string s;
  vector<string> v;
  while(cin>>s) v.push_back(s);
  mstack st; 
  for(int i=0;i<(int)v.size();i++){
    if(v[i][0]=='+'){
      int r=st.top();st.pop();
      int l=st.top();st.pop();
      st.push(l+r);
      continue;
    }
    if(v[i][0]=='-'){
      int r=st.top();st.pop();
      int l=st.top();st.pop();
      st.push(l-r);
      continue;
    }
    if(v[i][0]=='*'){
      int r=st.top();st.pop();
      int l=st.top();st.pop();
      st.push(l*r);
      continue;
    }
    st.push(stoi(v[i]));
  }
  cout<<st.top()<<endl;
  return 0;
}