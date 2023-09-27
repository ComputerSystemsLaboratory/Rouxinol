#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> 

char number[1001];

int main(){	
  
  while(1){
  
    scanf("%s", number);
    
    if(number[0]=='0') break;
    
    int i=0,ans=0;
    
    while(number[i]){
      
      ans+=number[i]-'0';
      
      i++;
      
      }
    
    printf("%d\n",ans);
    
    }
	 
}