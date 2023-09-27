#include<bits/stdc++.h>
using namespace std;

struct tree{int p,l,r,s,dg,dp,h;};

tree t[30];

void walk(int n,int f){
  if(n==-1)return;
  if(f==1)cout<<" "<<n;
  walk(t[n].l,f);
  if(f==2)cout<<" "<<n;
  walk(t[n].r,f);
  if(f==3)cout<<" "<<n;
}


void depth(int n,int d){
  if(n==-1)return;
  t[n].dp=d;
  depth(t[n].l,d+1),depth(t[n].r,d+1);
}

void height(int n,int h){
  if(n==-1)return;
  t[n].h=max(t[n].h,h);
  height(t[n].p,h+1);
}

int main(){
  int n,id,l,r,cnt=0;
  cin>>n;
  for(int i=0;i<n;i++)t[i].h=t[i].s=t[i].p=-1;
  for(int i=0;i<n;i++){
    cin>>id>>l>>r;
    t[id].r=r;
    t[id].l=l;
    cnt=0;
    if(l!=-1)t[l].p=id,cnt++;
    if(r!=-1)t[r].p=id,cnt++;
    if(cnt==2)t[r].s=l,t[l].s=r;
    t[id].dg=cnt;
  }
  for(int i=0;i<n;i++){
    height(i,0);
    if(t[i].p==-1)depth(i,0);
  }
  int flag;
  for(int i=0;i<n;i++)if(t[i].p==-1)flag=i;
  printf("Preorder\n");
  walk(flag,1);
  cout<<endl;
  printf("Inorder\n");
  walk(flag,2);
  cout<<endl;
  printf("Postorder\n");
  walk(flag,3);
  cout<<endl;
  return 0;
}