#include <stdio.h>
#include <string.h>

int main(void){
  int st, l, r, n, i, ans;
  char s[3];
  while(1){
    scanf("%d",&n);
    if(n == 0){
      break;
    }
    ans = 0;
    st = l = r = 0;
    for(i = 0;i < n;i++){
      scanf("%s",&s);
      if(!strcmp(s,"lu")){
	l = 1;
      }else if(!strcmp(s,"ru")){
	r = 1;
      }else if(!strcmp(s,"ld")){
	l = 0;
      }else if(!strcmp(s,"rd")){
	r = 0;
      }else{
	printf("error\n");
      }
      if(st != l && st != r){
	st = l;
	ans++;
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}