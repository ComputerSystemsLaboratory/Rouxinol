#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a[100][100],b[100]={},c[100]={};
  c[0]=1;
  cin>>n;
  for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)cin>>a[i][j];

  int k=1,min1,ans=0;
  while(1){
   int min=10000;
   for(int i=0;i<k;i++)
    for(int j=0;j<n;j++)
     if(a[b[i]][j]<min && a[b[i]][j]!=-1 &&c[j]!=1){
      min=a[b[i]][j];
      min1=j;
    }
   if(k==n)break;
   b[k]=min1;
   c[min1]=1;
   ans+=min;
   k++;
  }

 cout<<ans<<endl;
 return 0;
} 