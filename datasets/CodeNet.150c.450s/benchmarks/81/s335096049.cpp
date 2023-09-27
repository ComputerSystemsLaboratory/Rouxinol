#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<math.h>

#define SIZE 100
#define INF 10000000

typedef struct {
  int data;
  int pos;
} DAT;


using namespace std;

int main(){

  DAT ans;
  int i,j,k;
  int a,b,c;
  int n;
  int time[SIZE][SIZE];

  while(1){

    int sum[SIZE]={0};
    cin>>n;
    if(n==0)break;

  for(i=0;i<n+1;i++){
    for(j=0;j<n+1;j++){
      if(i==j){
	time[i][j]=0;
      } else {
	time[i][j]=INF;
      }
    }
  }

  int max=0;
    for(i=0;i<n;i++){
      cin>>a>>b>>c;
      time[a][b]=c;
      time[b][a]=c;
      if(max<a)max=a;
      if(max<b)max=b;
    }

    for(i=0;i<max+1;i++){
      for(j=0;j<max+1;j++){
	for(k=0;k<max+1;k++){
	  time[j][k]=min(time[j][k],time[j][i]+time[i][k]);
	}
      }
    }

    for(i=0;i<max+1;i++){
      for(j=0;j<max+1;j++){
	sum[i]+=time[i][j];
      }
    }

    ans.data=INF;
    ans.pos=-1;
    for(i=0;i<max+1;i++){
      if(sum[i]<ans.data){
	ans.data=sum[i];
	ans.pos=i;
      }
    }

    printf("%d %d\n",ans.pos,ans.data);

  }
  
  return 0;
}