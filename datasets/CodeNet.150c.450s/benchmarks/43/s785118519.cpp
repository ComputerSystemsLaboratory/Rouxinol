#include <iostream>
using namespace std;

int main(){
 int n, a, b, a_sum, b_sum;
 while(cin>>n, n){
  a_sum=b_sum=0;
  while(n--){
   cin>>a>>b;
   if(a>b)a_sum+=a+b;
   else if(a<b)b_sum+=a+b;
   else a_sum+=a, b_sum+=b;
  }
  printf("%d %d\n", a_sum,b_sum);
 }
 return 0;
}