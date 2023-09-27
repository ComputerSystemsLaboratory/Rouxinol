#include<stdio.h>
int main(){
  int L,i,j,k,st,sw;
  int an[10000];
  char a[7];
  int ma,mi;
  int ju;
  while(1){
    //syoki
    for(i=0;i<10000;i++){
      an[i]=0;
    }
    k=1;
    sw=0;
    for(i=0;i<7;i++){
      a[i]='0';
    }
    scanf("%s%d",a,&L);
    for(i=0;i<7;i++){
      if(a[i]=='\0')a[i]='0';
    }
    if(a[0]=='0'&&L==0)break;
      ju=1;
      for(i=0;i<L;i++){
	if(i!=0)ju*=10;
	an[0]+=(a[L-i-1]-'0')*ju;
      }
    while(1){

      //ma
      for(i=0;i<L;i++){
	for(j=1;j<L;j++){
	  if(a[j-1]<a[j]){
	    st=a[j];
	    a[j]=a[j-1];
	    a[j-1]=st;
	  }
	}
      }
      ju=1;
      ma=0;
      for(i=0;i<L;i++){
	if(i!=0)ju*=10;
	ma+=(a[L-i-1]-'0')*ju;
      }
      //mi
      for(i=0;i<L;i++){
	for(j=1;j<L;j++){
	  if(a[j-1]>a[j]){
	    st=a[j];
	    a[j]=a[j-1];
	    a[j-1]=st;
	  }
	}
      }
      ju=1;
      mi=0;
      for(i=0;i<L;i++){
	if(i!=0)ju*=10;
	mi+=(a[L-i-1]-'0')*ju;
      }
      //
      an[k]=ma-mi;
      k++;
      for(i=0;i<k-1;i++){
	if(an[k-1]==an[i]){
	  printf("%d %d %d\n",i,an[i],k-1-i);
	  sw=1;
	}
      }
      if(sw==1)break;
      st=an[k-1];
      for(i=0;i<L;i++){
	a[i]=st/ju+'0';
	st%=ju;
	ju/=10;
      }
    }
  }
  return 0;
}
    
      