#include <iostream>
#include <algorithm>
using namespace std;
int d[10][10];
int sum[10];
const int INF=10000;
int main(void){
  while(1){
   int n;
   cin>>n;
   if(n==0)break;
   for(int i=0;i<10;i++){
       for(int j=0;j<10;j++){
           d[i][j]=INF;
           if(i==j)d[i][j]=0;
       }
   }
   for(int i=0;i<n;i++){
       int s,t,c;
       cin>>s>>t>>c;
       d[s][t]=d[t][s]=c;
   }
   for(int k=0;k<10;k++){
       for(int i=0;i<10;i++){
           for(int j=0;j<10;j++){
               d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
           }
       }
   }
   int ans=10000000,ansn=0;
   for(int i=0;i<10;i++)sum[i]=0;
      for(int i=0;i<10;i++){
          for(int j=0;j<10;j++){
              if(d[i][j]>=INF)continue;
              sum[i]+=d[i][j];
          }
          if(sum[i]==0)continue;
          if(ans>sum[i]){
              ansn=i;
              ans=sum[i];
          }
      }
      cout<<ansn<<' '<<ans<<endl;
  }
}