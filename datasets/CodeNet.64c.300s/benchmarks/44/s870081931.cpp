#include <cstdio>
#include <cstring>

#define MAXN 100000000
int mins(int a,int b){
  if(a<0)return b;
  else if(b<0 || a<b)return a;
  else return b;
}
int main(void){
  int i=0,j=0,k=0;
  int e=0;
  scanf("%d",&e);

  while(e!=0){

 
    int gl[10][10]={0};
    int ma=0;
    for(i=0;i<10;i++){
      for(j=0;j<10;j++){
	gl[i][j]=MAXN;
      }
    }
    //memset(gl,MAXN,sizeof(gl));
    for(i=0;i<e;i++){
      scanf("%d%d",&j,&k);
      if(ma<j || ma<k)ma=(j<k)?k:j;
      scanf("%d",&(gl[j][k]));
      gl[k][j]=gl[j][k];
    }
    for(i=0;i<=ma;i++){
      gl[i][i]=0;
    }
    //printf("%d\n",ma);
    for(k=0;k<=ma;k++){
      for(i=0;i<=ma;i++){
	for(j=0;j<=ma;j++){
	  gl[i][j]=mins(gl[i][j],gl[i][k]+gl[k][j]);
	  //printf("%d\x0020%d%d\n",gl[i][j],i,j);
	}
      }
    }
    int sum=0;
    int summem=-1;
    int mn=0;
    for(i=0;i<=ma;i++){
      for(j=0;j<=ma;j++){
	sum+=gl[i][j];
      }
      if(summem==-1 || sum < summem){
	summem=sum;
	mn=i;
      }
      sum=0;
    }

    printf("%d\x0020%d\n",mn,summem);

    scanf("%d",&e);
  }
  return 0;
}