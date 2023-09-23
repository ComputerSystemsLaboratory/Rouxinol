#include <iostream>

using namespace std;

int main(void){
  
  while(1){
    int a,b;
    char str;

   cin >> a >> str >> b;

   if(str == '+')
     cout << a+b << endl;
   else if(str == '-')
     cout << a-b << endl;
   else if(str == '*')
     cout << a * b << endl;
   else if(str == '/')
     cout << a /b << endl;
   else 
     break;


 } 

  

  return 0;
}