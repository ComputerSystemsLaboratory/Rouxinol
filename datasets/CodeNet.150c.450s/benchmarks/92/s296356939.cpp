#include<iostream>

using namespace std;

 int main(){
  int a,b,sum,count;
  
  while(cin >> a >> b){
  
   sum = a + b;
   count = 0;
   
   for(int i = sum; i >= 1; i= i/10){
    count++;
   }
    
   cout << count << endl;
    
  }
  
 return 0;
}