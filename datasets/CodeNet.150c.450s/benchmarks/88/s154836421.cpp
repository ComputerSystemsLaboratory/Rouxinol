#include<stdio.h>
#include<math.h>

typedef struct{
  int h;
  int w;
  double r;
}Date;

int main(){
  int i,j,k;
  int h,w;
  double r;
  Date A[100000];
  double flag;
  Date ans;
  
  while(1){
    k=0;
    flag=1000000;
    scanf("%d %d",&h,&w);
    if(h==0&&w==0)break;

    r=sqrt(h*h+w*w);
  
    for(i=1;i<=150;i++){
      for(j=i+1;j<=150;j++){
	A[k].r=sqrt(i*i+j*j);
	if(A[k].r==r&&i>h){
	  A[k].h=i;
	  A[k].w=j;
	  k++;
	}else if(r<A[k].r&&A[k].r<flag){
	  A[k].h=i;
	  A[k].w=j;
	  flag=A[k].r;
	  k++;
	}
      }
    }
    for(i=0;i<k;i++){ 
      if(i==0){
	ans.h=A[0].h;
	ans.w=A[0].w;
	ans.r=A[0].r;
      }else{
	if(ans.r>A[i].r){
	  ans.h=A[i].h;
	  ans.w=A[i].w;
	  ans.r=A[i].r;
	}else if(ans.h>A[i].h){
	  ans.h=A[i].h;
	  ans.w=A[i].w;
	  ans.r=A[i].r;
	}
      }
    }
    printf("%d %d\n",ans.h,ans.w);  
  }
  
  return 0;
}