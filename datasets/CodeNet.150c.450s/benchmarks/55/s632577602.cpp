#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
  string number;
  int i,sum = 0;

  while(1){
    cin >> number;
    if(number == "0") break;
    for(i = 0; i < number.size(); i++){
      sum += number[i] - '0';
    }
    cout << sum << endl;
    sum = 0;
  }
  return 0;
}