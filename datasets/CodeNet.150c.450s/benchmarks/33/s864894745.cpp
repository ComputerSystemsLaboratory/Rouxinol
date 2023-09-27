#include<stdio.h>
int main(){
  int x,y,j,s,n1,n2,n3,n4,i,max;

  while(1){
    max=0;
    scanf("%d%d%d",&x,&y,&s);
    if(x==0&&y==0&&s==0)break;
    for(i=1;i<s;i++){
      n1=i;
      for(j=1;j<s;j++){
	n2=j;
	n3=(double)n1*(100+x)/100;
	n4=(double)n2*(100+x)/100;
	if(n3+n4!=s)continue;
	n3=(double)n1*(100+y)/100;
	n4=(double)n2*(100+y)/100;
	//  printf("%d %d %d\n",n1,n2,n1+n2);
	if(n3+n4>max)max=n3+n4;
      }
    }
    printf("%d\n",max);
    
  }
  return 0;
}