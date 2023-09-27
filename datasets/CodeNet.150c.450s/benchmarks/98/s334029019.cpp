#include<stdio.h>
int main(){
  int n,m,i,I,v,hs=0,ts=0,l,p;
  int h[100],t[100];
  while(1){
    scanf("%d %d",&n,&m);
    ts=0;
    hs=0;
    if(n==0&&m==0) break;
    else {
      for(i=0;i<n;i++){
	scanf("%d",&t[i]);

      }
      for(i=0;i<m;i++){
	scanf("%d",&h[i]);

      }
      for(i=0;i<n;i++){
	l=i;
	for(I=0;I<m;I++){
	  hs=0;
	  ts=0;
	 
	  v=t[l];
	  t[l]=h[I];
	  h[I]=v;
	  for(p=0;p<n;p++){
	    ts+=t[p];
	  }
	  for(p=0;p<m;p++){
	    hs+=h[p];
	  }
	 
	  if(ts==hs) break;
	  else { 
	    v=t[l];
	    t[l]=h[I];
	    h[I]=v;
	  }
	}
	if(ts==hs) break;
	else continue;
      }
    }
    if(ts==hs) printf("%d %d\n",h[I],t[l]);
    else printf("-1\n");
  }
  return 0;
}