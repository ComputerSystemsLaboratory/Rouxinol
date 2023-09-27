#include <iostream>
struct node{int p,l,r;};
node t[25];
node ti[25];
int n,flag[25];
using namespace std;
void pr(int now){
  if(flag[now]==0){
    cout<<" "<<now;
    flag[now]=1;
  }
  if(t[now].l!=-1){
    pr(t[now].l);
    if(t[t[now].l].r!=-1) pr(t[t[now].l].r);
  }
}
void in(int now){
  if(ti[now].l!=-1) in(ti[now].l);
  cout<<" "<<now;
  if(ti[now].r!=-1) in(ti[now].r);
}
void po(int now){
  //cout<<now<<" ";
  if(t[now].l!=-1) po(t[now].l);
  if(flag[now]==0){
    cout<<" "<<now;
    flag[now]=1;
  }
  if(t[now].r!=-1) po(t[now].r);
}
int main(){

  int t1,t2,t3;
  cin>>n;
  for(int i=0;i<n;i++) t[i].p=t[i].l=t[i].r=ti[i].p=ti[i].r=ti[i].l=-1;
  for(int i=0;i<n;i++){
    cin>>t1>>t2>>t3;
    if(t2!=-1){
      ti[t1].l=t2;
      ti[t2].p=t1;
    }
    if(t3!=-1){
      ti[t1].r=t3;
      ti[t3].p=t1;
    }
    if(t2==-1){
      t2=t3;
      t3=-1;
    }
    if(t2!=-1){
      t[t2].p=t1;
      t[t2].r=t3;
    }
    if(t3!=-1) t[t3].p=t1;
    t[t1].l=t2;
  }
  int root;
  for(int i=0;i<n;i++) if(t[i].p==-1) root=i;
  cout<<"Preorder"<<endl;
  pr(root);
  cout<<endl;
  for(int i=0;i<n;i++) flag[i]=0;
  cout<<"Inorder"<<endl;
  in(root);
  cout<<endl;
  for(int i=0;i<n;i++) flag[i]=0;
  cout<<"Postorder"<<endl;
  po(root);
  cout<<endl;
  return 0;
  
}