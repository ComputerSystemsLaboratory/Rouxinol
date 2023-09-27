#include <stdio.h>
int main(){
  
  int n,i;
  char str[1001];
  int sum=0;
  

  for(;;){
    scanf("%s",str);
    sum=0;
    if(str[0]=='0'){
      break;
    }

    for(i=0;str[i]!='\0';i++){
      sum+=(str[i]-'0');  
    }
	 
    printf("%d\n",sum);

	


     

  }


  return 0;
}