#include<iostream>
#include <cmath>

using namespace std;

void digitLength()
{
    int a, b;
    int number;
    
    while(cin>>a>>b) //input several test cases
    {
        number=log10(a+b)+1; //calculate the digit number; if can be divided by 10, then +1 
        cout<<number<<endl;
    }
   
    return;
}
  
int main(){
  
    digitLength();
    return 0;
}