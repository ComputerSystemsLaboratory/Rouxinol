#include <stdio.h>

int main(){

  int x,y,s,i,ans1=0,ans2=0,a,b,j,T,max=0,d;


  for(;;){

    scanf("%d %d %d",&x,&y,&s);

    if(x==0&&y==0&&s==0){
      break;
    }
    for(i=1;i<=s-1;i++){
      for(j=1;j<=s-1;j++){
	if(s==i*(100+x)/100+j*(100+x)/100){

	  ans1=i*(100+y)/100+j*(100+y)/100;
	  if(max<ans1){
	    max=ans1;
	    a=i;
	    b=j;
	  }
	}
      }
    }
  ans2=a*(100+y)/100+b*(100+y)/100;
    printf("%d\n",ans2);
    ans1=0;
    ans2=0;
    max=0;
  }
  return 0;
}