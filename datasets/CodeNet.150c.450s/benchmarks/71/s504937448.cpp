#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int n,res=0,count;
  int a=0,b=0,c=0,d=0;
  
  
  while( scanf("%d",&n) != EOF){
     
     for( a = 0 ; a < 10 ; a++){
       //if( (a+b+c+d) == n)res++;

       for( b = 0 ; b < 10 ; b++){
	 //if( (a+b+c+d) == n)res++;
	 for( c = 0 ; c < 10 ; c++){
	   //if( (a+b+c+d) == n)res++;
	   for( d = 0 ; d < 10 ; d++){
	     if( (a+b+c+d) == n)res++;
	     //cout << res <<endl;
	   }

	 }
	 

       }

     }
     // count = a;
     //if(count > 9)break;
     cout << res<<endl;
     res =0;
   }

  
  return 0;
}