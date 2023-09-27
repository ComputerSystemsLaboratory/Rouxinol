#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main(){
  
  int nc,n,flag=1;
  char c;
  char pr[100000],af[100000];


  while(1){
    
    scanf("%d",&nc);
    
    if(nc == 0) break;
    
    for(int i=0 ; i<nc ; i++){
      scanf(" %c %c",&pr[i],&af[i]);
    }
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; i++){
      scanf(" %c",&c);
      
      for(int j=0 ; j<nc ; j++){
	if(c == pr[j]) {
	  printf("%c",af[j]);
	  flag = 0;
	break;
	}
      }
      if(flag) printf("%c",c);
      flag = 1;
    }
    
    printf("\n");
    
  }
  
  return 0;
}