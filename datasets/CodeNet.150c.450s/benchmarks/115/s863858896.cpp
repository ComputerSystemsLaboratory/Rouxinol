#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int p[1001][1001]={0};
int main(){
  int i,j,q,e,l,z,m,u,n;
  char x[2001],y[2001];
  cin>>q;
  for(e=0;e<q;e++){
    scanf("%s %s",x,y);
    l=strlen(x);
    z=strlen(y);
 
    for(i=0;i<=l;i++){
      for(j=0;j<=z;j++){
        p[i][j]=0;
      }
    }
    for(i=1;i<=z;i++){
      for(j=1;j<=l;j++){
        if(y[i-1]==x[j-1])p[j][i]=p[j-1][i-1]+1;
        else p[j][i]=max(p[j-1][i],p[j][i-1]);
      }
    }
    cout<<p[l][z]<<endl;
  }
  return 0;
}

