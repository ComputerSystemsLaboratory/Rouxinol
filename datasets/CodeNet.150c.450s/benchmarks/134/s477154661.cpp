#include<bits/stdc++.h>
#define N 25
using namespace std;
int n,a[N],l[N],r[N],used[N];
void dfs(int x,int z){
  if(z==0)cout<<' '<<x;
  if(~l[x])dfs(l[x],z);
  if(z==1)cout<<' '<<x;
  if(~r[x])dfs(r[x],z);
  if(z==2)cout<<' '<<x;
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    cin>>l[a[i]]>>r[a[i]];
    if(~l[a[i]])used[l[a[i]]]=1;
    if(~r[a[i]])used[r[a[i]]]=1;
  }
  for(int i=0;i<n;i++)if(!used[i])cout<<"Preorder"<<endl,dfs(i,0),cout<<endl;
  for(int i=0;i<n;i++)if(!used[i])cout<<"Inorder"<<endl,dfs(i,1),cout<<endl;
  for(int i=0;i<n;i++)if(!used[i])cout<<"Postorder"<<endl,dfs(i,2),cout<<endl;
  return 0;
}

