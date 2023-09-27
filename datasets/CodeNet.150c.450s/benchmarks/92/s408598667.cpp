#include<iostream>
using namespace std;

int main(void){

  int num,num1,num2,count;

  while(cin >> num1 >> num2){
    num = num1 + num2;
    count = 0;
    while(num >= 10){
      num = num / 10;
      count++;
    }

    cout << count + 1 << endl;
  }
  return 0;

}