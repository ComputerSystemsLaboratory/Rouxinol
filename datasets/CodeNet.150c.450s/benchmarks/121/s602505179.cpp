#include<stdio.h>
int main(){
  int h,w,a,y[10010],x[10010],ny,nx,i,j,k,r,t;
  int Y[]={1,0,-1,0};
  int X[]={0,1,0,-1};
  char s[110][110],c;
  while(scanf("%d %d",&h,&w),h){
    for(i=a=0;i<h;i++)scanf("%s",s[i+1]+1);
    for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
	if(s[i][j]==0)continue;
	a++;
	c=s[i][j];
	s[y[0]=i][x[0]=j]=t=0;
	for(r=1;r-t;t++){
	  for(k=0;k<4;k++){
	    ny=y[t]+Y[k];
	    nx=x[t]+X[k];//printf("%c %c\n",c,s[ny][nx]);
	    if(s[ny][nx]-c)continue;
	    s[y[r]=ny][x[r]=nx]=0;
	    r++;
	  }
	}
      }
    }
    printf("%d\n",a);
  }
  return 0;
}