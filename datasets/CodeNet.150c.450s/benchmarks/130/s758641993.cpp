#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int a[100][100],b[1000];
  int n,m,i,j,c=0;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(j=0;j<m;j++){
scanf("%d",&b[j]);
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      c+=a[i][j]*b[j];
    }
   printf("%d\n",c);
   c=0;
 
  }  
return 0;
}