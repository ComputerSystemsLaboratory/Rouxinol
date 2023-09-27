#include <stdio.h> 
using namespace std;
 long long Fibonacci[43] = {0};
 long long fibo(int n){ 
if(n == 0) return 1;
 else if(n == 1) return 1; 
else{ if(Fibonacci[n-1] != 0 && Fibonacci[n-2] != 0){ 
//Do nothing }else if(Fibonacci[n-1] != 0){
 Fibonacci[n-2] = fibo(n-2); 
}
else if(Fibonacci[n-2] != 0){ 
Fibonacci[n-1] = fibo(n-1);
 }
else{ Fibonacci[n-1] = fibo(n-1);
 Fibonacci[n-2] = fibo(n-2); 
} 
return Fibonacci[n-1] + Fibonacci[n-2]; 
}
 } 

int main(){ int n; 
scanf("%d",&n);
 printf("%lld\n",fibo(n));

 } 
