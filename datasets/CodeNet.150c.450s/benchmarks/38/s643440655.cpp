#include<iostream>
#include<stdio.h>
using namespace std;

int triangle(int a,int b,int c){
    a = a*a;
    b = b*b;
    c = c*c;

    if(a == (b+c))      return 0;
    else if(b == (a+c)) return 0;
    else if(c == (a+b)) return 0;
    else                return 1;
}

int main(){
   int n;
   int a,b,c;
   int i = 0;

   scanf("%d",&n);

  while(i < n){
   scanf("%d %d %d",&a,&b,&c);
  
   if(triangle(a,b,c) == 0){ 
     cout << "YES\n";
   }else{
     cout << "NO\n"; 
 }
 i++;
}
    return 0;
}