#include<iostream>
#define N 100001
#define NIL -1
using namespace std;
 
struct Node{
  int parents,left,right,sib;
};
Node T[N];
 
void preparse(int u){
  if(u<0) return;
  cout<<" "<<u;
  preparse(T[u].left);
  preparse(T[u].right);
}
 
void inparse(int u){
  if(u<0) return;
  inparse(T[u].left);
  cout<<" "<<u;
  inparse(T[u].right);
}
 
void postparse(int u){
  if(u<0) return;
  postparse(T[u].left);
  postparse(T[u].right);
  cout<<" "<<u;
}
 
int main(){
  int n,id,c;
  cin>>n;
  for(int i=0;i<n;i++){
      T[i].left=NIL;
      T[i].parents=NIL;
      T[i].right=NIL;
      T[i].sib=NIL;
  }
for(int i=0;i<n;i++){
    cin>>id;
    for(int j=0;j<2;j++){
      cin>>c;
      if(c>=0)T[c].parents=id;
      if(j==0) T[id].left=c;
      else T[id].right=c;
    }
  }
 
  int root;
  for(int i=0;i<n;i++) if(T[i].parents==NIL) root=i;
 
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