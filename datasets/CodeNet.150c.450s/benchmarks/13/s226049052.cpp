#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,k,count=0;
  char s[100],p[100],a;
  scanf("%s",s);
  scanf("%s",p);
  int lens=strlen(s);
  int lenp=strlen(p);
  for(i=0;i<=lens;i++){
    a=s[0];
    for(j=0;j<=lens;j++){
      s[j]=s[j+1];
    }
    s[lens-1]=a;
    if(s[0]==p[0]){
      for(k=0;k<lenp;k++){
	if(s[k]==p[k]){
	  count++;
	}
      }
    }
    if(count==lenp)break;
    count=0;
  }
  if(count==lenp)printf("Yes\n");
  else printf("No\n");
  return 0;
}