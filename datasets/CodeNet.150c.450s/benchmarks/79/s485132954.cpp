#include<bits/stdc++.h>
using namespace std; 
int main()
{
  int n, cut;
  int A[50],B[50],i,j,p,c;
  while(1){
      cin>>n>>cut;
      if(n==0&&cut==0)break;
      else{
      for(i=0; i<=n-1; i++)A[i]=n-i;
      while(cut--){
          cin>>p>>c;
          for(j=0; j<n; j++)B[j]=A[j];
          for(j=0; j<p-1; j++)B[j+c]=A[j];
          for(j=0; j<c;j++)B[j]=A[j+p-1];
          for(j=0; j<n;j++)A[j]=B[j]; 
        }}
      cout<<A[0]<<endl;}
      return 0;
    }
 