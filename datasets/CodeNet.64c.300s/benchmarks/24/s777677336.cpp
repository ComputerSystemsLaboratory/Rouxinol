#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main(){
  
  int n,anum,bnum;
  int as, bs;
  
  as = bs = 0;
  
  while(1){
    scanf("%d",&n);
    
    if(n == 0) break;  
    
    for(int i = 0 ; i < n ; i++){
      scanf("%d%d",&anum,&bnum);
      
      if(anum == bnum){
	as += anum;
	bs += bnum;
      }
      
      else if(anum > bnum){
	as += anum;
	as += bnum; 
      }
      
      else if(anum < bnum){
	bs += anum;
	bs += bnum; 
      }  
    }
    
    printf("%d %d\n",as,bs);

    as = bs = 0;

  }
  return 0;
}