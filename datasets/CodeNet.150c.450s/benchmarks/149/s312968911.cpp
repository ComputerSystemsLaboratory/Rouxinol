#include<bits/stdc++.h>
using namespace std;
int a[10005]={};
int find(int x){
	if(a[x]==x)return a[x];
	else return (a[x]=find(a[x]));
}
int main(){
  int n,q;cin>>n>>q;
  for(int i=0;i<10005;i++)a[i]=i;
  for(int i=0;i<q;i++){
    int t,x,y;cin>>t>>x>>y;
    if(t==0){a[find(x)]=find(y);}
    if(t==1){cout<<(find(x)==find(y)?1:0)<<endl;}
  }
}