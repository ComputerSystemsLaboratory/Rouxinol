#include<iostream>
using namespace std;

int main(void){
 
  long num1,num2,mul,gcd,lcm;
  
  while(cin >> num1 >> num2){
    mul = num1 * num2;

    /*GCD*/
    if(num1 >= num2){
      while(num2 != 0){
	gcd = num1 % num2;
	num1 = num2;
	num2 = gcd;
      }
      gcd = num1;
    }else{
      while(num1 != 0){
	gcd = num2 % num1;
	num2 = num1;
	num1 = gcd;
      }
      gcd = num2;
    }

    /*LCM*/
    lcm = mul / gcd;

    /*PRINT*/
    cout << gcd << " " << lcm << endl;      
  }
  return 0;

}