#include<bits/stdc++.h>
#define INF 100000000
using namespace std;
int n,m[101][101],p[101];
void dp();

int main(){
  cin>>n;
  for(int i=0;i<n;i++)cin>>p[i-1]>>p[i];
  dp();
  cout<<m[1][n]<<endl;
   
  return 0;
}
void dp(){
  for(int l=2;l<=n;l++)
    for(int i=1;i<=n-l+1;i++){
     int j=i+l-1;
     m[i][j]=INF;
     for(int k=i;k<j;k++){
       int a=m[i][k]+m[k+1][j]+p[i-2]*p[k-1]*p[j-1];
       if(m[i][j]>a)m[i][j]=a;
     }
    } 
}

