#include<iostream>
#define N 100001
using namespace std;

struct Node{
  int p,l,r,sib;
};
Node t[N];

void preparse(int u){
  if(u<0) return;
  cout<<" "<<u;
  preparse(t[u].l);
  preparse(t[u].r);
}

void inparse(int u){
  if(u<0) return;
  inparse(t[u].l);
  cout<<" "<<u;
  inparse(t[u].r);
}

void postparse(int u){
  if(u<0) return;
  postparse(t[u].l);
  postparse(t[u].r);
  cout<<" "<<u;
}

int main(){
  int n,id,c;
  cin>>n;
  for(int i=0;i<n;i++)t[i].l=-1,t[i].p=-1,t[i].r=-1,t[i].sib=-1;
for(int i=0;i<n;i++){
    cin>>id;
    for(int j=0;j<2;j++){
      cin>>c;
      if(c>=0)t[c].p=id;
      if(j==0) t[id].l=c;
      else t[id].r=c;
    }
  }

  int root;
  for(int i=0;i<n;i++) if(t[i].p==-1) root=i;

  cout<<"Preorder"<<endl;
  preparse(root);
  cout<<endl;
  cout<<"Inorder"<<endl;
  inparse(root);
  cout<<endl;
  cout<<"Postorder"<<endl;
  postparse(root);
  cout<<endl;

  return 0;
}