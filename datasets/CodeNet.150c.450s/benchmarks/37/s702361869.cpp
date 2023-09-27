#include<bits/stdc++.h>
using namespace std;
int main(){
  double a[2][3];
  bool f=0;
  while(cin>>a[0][0]>>a[0][1]>>a[0][2]>>a[1][0]>>a[1][1]>>a[1][2]){
    if(a[0][0]==0)
      for(int i=0;i<3;i++)swap(a[0][i],a[1][i]),f=1;
    for(int i=0;i<2;i++){
      for(int j=i+1;j<3;j++)
	a[i][j]/=a[i][i];
      a[i][i]=1;
      for(int j=0;j<2;j++){
	if(j==i)continue;
	double t=a[j][i];
	for(int k=i;k<3;k++)
	  a[j][k]-=t*a[i][k];
      }
    }
    printf("%.3f %.3f\n",a[0][2],a[1][2]);
  }
  return 0;
}