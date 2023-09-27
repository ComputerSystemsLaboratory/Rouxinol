#include <stdio.h>
#include <string.h>
 
int main() {
 
  char str[1050] = {0};
  char ch[1050] = {0};
  char mei[30] = {0};
  char pl[1050]={0};
  int i,j,k,l,m,n,o,p;
 
  
  scanf("%s",str);
  scanf("%d",&n);
    
  for(i=0; i<7 ;i++) {
    ch[i] = str[i];
  }
 
  j=0;
  o=0;
  k=l=0;
 
  for ( i = 0; i < n; i++ ){
    scanf("%s", mei);
    scanf("%d %d", &k, &l);
    // printf("mei= %s",mei);
   
     
    if(mei[2] =='p') {
      
      scanf("%s", pl);
 
      for(m=0;m<l-k+1;m++) {
 
    //  printf("str[%d]%c = pl[%d]%c\n",m+k,str[m+k] ,m,pl[m]);
    str[m+k] = pl[m];   
      }
    }
 
    else if(mei[2] == 'v') {
       
      for(m=0; m<strlen(str);m++) {
    ch[m] = str[m];
      }
       
      for(m=0;m<l-k+1;m++) {
    //  printf("str[%d]%c = ch[%d]%c\n",k+m,str[k+m],l-m,ch[l-m]);
    str[k+m] = ch[l-m];
      }
     
    }
 
    else if(mei[0] = 'p') {   
       
      for(m=k; m<=l;m++) {
    printf("%c" ,str[m]);
      }
      printf("\n");
    }
     
  }
 
    
  return 0;
 
}
