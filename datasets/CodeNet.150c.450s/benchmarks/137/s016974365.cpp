#include<stdio.h>
#include<stdlib.h>
 
char ha[1<<22],k[256];
 
int hash(char *str)
{
  int h=1;
  while(*str) h=(h<<2)+k[*str++];
    return h;
}
 
int main(){
  int i,h,n;
  char c[8],str[13];
 
  k['C']=1;
  k['G']=2;
  k['T']=3;
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    scanf(" %s %s",c,str);
    h=hash(str);
 
    if(c[0]=='i') 
      ha[h>>3] |= 1<<(h&7);
 
    else puts((ha[h>>3] & (1<<(h&7)))? "yes":"no");
  }
  return 0;
}