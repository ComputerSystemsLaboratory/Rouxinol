#include<bits/stdc++.h>
#define N 1000000
using namespace std;

int main(){
 int pol[201],ans[N],ans2[N];

 for(int i=0;i<N;i++)ans[i]=ans2[i]=N;
 for(int i=1;i<201;i++){
   pol[i]=i*(i+1)*(i+2)/6;
   if(pol[i]<N){
     ans[pol[i]]=1;
   if(pol[i]%2)ans2[pol[i]]=1;
   }
 }
 for(int i=1;i<=N;i++)
   for(int j=1;j<201;j++){
     if(i-pol[j]>=0 && pol[j]<N) ans[i]=min(ans[i-pol[j]]+ans[pol[j]],ans[i]);
     if(i-pol[j]>=0 && pol[j]%2 && pol[j]<N)ans2[i]=min(ans2[i-pol[j]]+ans2[pol[j]],ans2[i]);
   }
 while(1){
   
  int n;
   cin>>n;
   if(n==0) break;
  cout<<ans[n]<<" "<<ans2[n]<<endl;
 }

  
  return 0;
}