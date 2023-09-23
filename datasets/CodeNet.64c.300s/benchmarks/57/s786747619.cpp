#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w,ma,sum,mai;
  int a[10][10000];
  while(scanf("%d %d",&h,&w),h!=0&&w!=0){
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	scanf("%d",&a[i][j]);
      }
    }    
    ma = 0;
    for(int i=0;i<(1<<h);i++){
      sum = 0;
      for(int j=0;j<w;j++){
	mai = 0;
	for(int k=0;k<h;k++){
	  if( (i&(1<<k)) == 0) mai += !(a[k][j] == 1);
	  else mai += (a[k][j] == 1);
	}
	sum += max(mai,h-mai);
      }
      ma = max(ma,sum);
    }
    printf("%d\n",ma);
  }
  return (0);
}