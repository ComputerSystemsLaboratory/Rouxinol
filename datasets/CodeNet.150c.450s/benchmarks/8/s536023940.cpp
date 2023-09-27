#include<stdio.h>
#include<string.h>
int main(){
  int a=0,b=0,n,i,j,sa,sb,flag;
  char as[101],bs[101];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %s",as,bs);
    sa=strlen(as);
    sb=strlen(bs);
    if(sa<sb)flag=sb;
    else flag=sa;
    for(j=0;j<flag;j++){
      if(as[j]>bs[j]){
	a+=3;
	break;
      }
      else if(as[j]<bs[j]){
	b+=3;
	break;
      }
      else if(as[j]==bs[j] && j==flag-1){
	a++;
	b++;
	break;
      }
    }
  }
  printf("%d %d\n",a,b);
  return(0);
}