#include <stdio.h>

int main(){
  int n,st[110000]={},i,j;
  char c,nn;
  i=0;
  while(scanf(" %c",&c)!=-1){
    if('0'<=c&&c<='9'){
      n=c-'0';
      while(1){
	scanf("%c",&nn);
	if(nn==' ')break;
	n*=10;
	n+=(nn-'0');
      }
      st[i]=n;
      i++;
    }else {
      if(c=='+'){
	st[i-2]=st[i-1]+st[i-2];
      }else if(c=='-'){
	st[i-2]=st[i-2]-st[i-1];
      }else if(c=='*'){
	st[i-2]=st[i-1]*st[i-2];
      }
      i--;

    }

  }

  printf("%d\n",st[0]);
  return 0;
}