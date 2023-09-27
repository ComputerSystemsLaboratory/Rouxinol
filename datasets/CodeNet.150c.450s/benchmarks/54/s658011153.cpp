#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

  char w[12];
  char t[1001];
  //  char e[12]={'E','N','D','_','O','F','_','T','E','X','T'};
  char e[] = "END_OF_TEXT";
  int ans=0,i;

  scanf("%s",w);
  for(i=0;w[i]!='\0';i++){
    //    if(islower(w[i])!=0){
    if(islower(w[i])){
      w[i] = toupper(w[i]);
    }
  }


  for(;;){
    
    scanf("%s",t);
    if(strcmp(t,e)==0){
      break;
    }  


    for(i=0;t[i]!='\0';i++){
      if(islower(t[i])!=0){
	t[i] = toupper(t[i]);
      }
    }
    
  
    
    if(strcmp(w,t)==0){
      ans++;
    }
  }

  printf("%d\n",ans);

  return 0;
}