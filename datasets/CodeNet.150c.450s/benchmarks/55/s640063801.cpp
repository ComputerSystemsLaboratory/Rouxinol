#include<iostream>                                        
#include<cstdio>                                          
#include<cstring>                                         
using namespace std;                                      
                                                          
int main(){                                               
  char number[1001];                                      
  int i;                                                  
  int num;                                                
  while(1){                                               
    scanf("%s",number);                                   
    if(number[0] == '0') break;                           
    int sum = 0;                                          
    for(i=0;i<strlen(number);i++){                        
      num = number[i] - '0';                              
      sum += num;                                         
    }                                                     
    printf("%d\n",sum);                                   
  }                                                       
                                                          
  return 0;                                               
}