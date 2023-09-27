#include<iostream>
using namespace std;
struct node{int parent,left,right;};
node t[10001];
int n;

//ここから先行順巡回
void preparse(int u){
  if(u==-1) return;
  cout<<" "<<u;
  preparse(t[u].left);
  preparse(t[u].right);
}

//ここから中間順巡回
void inparse(int u){
  if(u==-1) return;
  inparse(t[u].left);
  cout<<" "<<u;
  inparse(t[u].right);
}

//ここから後行順巡回
void postparse(int u){
  if(u==-1) return;
  postparse(t[u].left);
  postparse(t[u].right);
  cout<<" "<<u;
}

//main関数
int main(){
  int v,l,r,root;
  cin>>n;
  for(int i=0;i<n;i++) t[i].parent=-1;
  for(int i=0;i<n;i++){
    cin>>v>>l>>r;
    t[v].left=l; //その節点においての左の子の情報を代入
    t[v].right=r; //右の子の情報を代入
    if(l!=-1) t[l].parent=v;
    if(r!=-1) t[r].parent=v;
    //それぞれの子の番地に親の情報を代入
  }
  for(int i=0;i<n;i++) if(t[i].parent==-1) root=i;
  //rootがどこかを探す
  
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
  
  