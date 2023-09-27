#include<bits/stdc++.h>
#define MAX (1<<17)
using namespace std;
int n,q;
int data[MAX+1];
void add(int i,int v){
  while(i<=n){
    data[i]+=v;
    i+=i&-i;
  }
}
int sum(int i){
  int res=0;
  while(i>0){
    res+=data[i];
    i-=i&-i;
  }
  return res;
}
int main(){
  int c,x,y;
  cin>>n>>q;
  for(int i=0;i<q;i++){
    scanf("%d%d%d",&c,&x,&y);
    if(c)cout<<sum(y)-sum(x-1)<<endl;
    else add(x,y);
  }
}