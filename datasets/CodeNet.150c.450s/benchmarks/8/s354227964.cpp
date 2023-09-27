#include <stdio.h>
#include <string.h>

int main(){
  char s1[101], s2[101];
  int taro=0,hana=0;
  int i,n;
  
  scanf("%d",&n);
 // printf("");
  for(i=0;i<n;i++)
  {
  	scanf("%s %s", s1, s2);
	  if ( strcmp(s1, s2) == 0 ) {
 	 //	printf("s1 == s2\n");
	  	taro+=1;
	  	hana+=1;
	  }
	  else if ( strcmp(s1, s2) > 0 ) {
  	//	printf("s1 > s2\n");
  		taro+=3;
 	  }
 	  else if ( strcmp(s1, s2) < 0 ) {
  	//	printf("s1 < s2\n");
  		hana+=3;
	 }
  }
	  printf("%d %d\n",taro,hana);
  return 0;
}

