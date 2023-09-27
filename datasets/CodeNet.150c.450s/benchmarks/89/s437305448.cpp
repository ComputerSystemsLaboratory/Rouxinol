#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 10000000
using namespace std;

bool prime[MAX];

void create(){
   for(int i=0;i<=MAX;i++)prime[i]=false;
   for(int i=3;i<=MAX;i+= 2)prime[i] = true;
   prime[2] = true;
   int limit = (int)sqrt(MAX)+1; 
     for(int i=3;i<=limit;i+=2){
	if(!prime[i])continue;
      for(int j=i+i;j<=MAX;j+=i){
	    prime[j]=false;
      }
      
   }

}


int main(){
   int a,d,n;
   create();


   while(true){
      int count = 0,i;
      cin >> a >> d >> n;
      if(a+d+n == 0)break;
      for(i=a;count < n;i+=d){
	 if(prime[i])count++;  
      }
      
      cout<<i-d<<endl;
   }
   return 0;
}