#include<bits/stdc++.h>
using namespace std;
#define int long long
int rv[30];
struct node{
  int id,left,right,par;
  node(){par=-1;}
};
node t[30];
void dfs(int v,int p){
  if(p==0){
    cout<<" "<<t[v].id;
    if(~t[v].left)  dfs(rv[t[v].left ],p);
    if(~t[v].right) dfs(rv[t[v].right],p);
  }
  if(p==1){
    if(~t[v].left)  dfs(rv[t[v].left ],p);
    cout<<" "<<t[v].id;
    if(~t[v].right) dfs(rv[t[v].right],p);
  }
  if(p==2){
    if(~t[v].left)  dfs(rv[t[v].left ],p);
    if(~t[v].right) dfs(rv[t[v].right],p);
    cout<<" "<<t[v].id;
  }
}
signed main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++) cin>>t[i].id>>t[i].left>>t[i].right;
  for(int i=0;i<n;i++) rv[t[i].id]=i;
  for(int i=0;i<n;i++){
    //cout<<t[i].id<<":"<<t[i].left<<":"<<t[i].right<<endl;
    if(~t[i].left)  t[rv[t[i].left ]].par=t[i].id;
    if(~t[i].right) t[rv[t[i].right]].par=t[i].id;
  }
  for(int i=0;i<n;i++){
    if(t[i].par==-1){
      cout<<"Preorder"<<endl;
      dfs(i,0);
      cout<<endl;
      cout<<"Inorder"<<endl;
      dfs(i,1);
      cout<<endl;
      cout<<"Postorder"<<endl;
      dfs(i,2);
      cout<<endl;
    }
  }
  return 0;
}