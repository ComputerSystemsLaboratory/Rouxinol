#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
int n,id,a,b,root;
int G[25][2];

void pre(){
  stack<int> st;
  st.push(root);
  while(!st.empty()){
    int p=st.top();st.pop();
    if(p==-1)continue;
    cout<<" "<<p;
    st.push(G[p][1]);
    st.push(G[p][0]);
  }
  cout<<endl;
}

void in(){
  stack<P> st;
  st.push(P(root,0));
  while(!st.empty()){
    P k=st.top();st.pop();
    int p=k.first;
    if(p==-1)continue;
    if(k.second==0){
      st.push(P(p,1));
      st.push(P(G[p][0],0));
    }else{
      cout<<" "<<p;
      st.push(P(G[p][1],0));
    }
  }
  cout<<endl;
}

void post(){
  stack<P> st;
  st.push(P(root,0));
  while(!st.empty()){
    P k=st.top();st.pop();
    int p=k.first;
    if(p==-1)continue;
    if(k.second==0){
      st.push(P(p,1));
      st.push(P(G[p][0],0));
    }else if(k.second==1){
      st.push(P(p,2));
      st.push(P(G[p][1],0));
    }else{
      cout<<" "<<p;
    }
  }
  cout<<endl;
}

int main(){
  cin>>n;
  root=n*(n-1)/2;

  for(int i=0;i<n;i++){
    cin>>id>>a>>b;
    G[id][0]=a;
    G[id][1]=b;
    if(a!=-1)root-=a;
    if(b!=-1)root-=b;
  }

  
  cout<<"Preorder"<<endl;
  pre();

  cout<<"Inorder"<<endl;
  in();

  cout<<"Postorder"<<endl;
  post();
  
  return 0;
}