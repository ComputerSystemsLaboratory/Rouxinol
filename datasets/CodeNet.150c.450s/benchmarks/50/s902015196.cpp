#include<iostream>

using namespace std;

int main(){
  int a,b;
  int count;
  while(1){
    count = 0;
    cin >> a;
    if( a == 0) break;

    b = 1000 - a;
    a = b%500;
    count = count + b/500;

    b= a%100;
    count = count + a/100;

    a = b%50;
    count = count + b/50;

    b = a%10;
    count = count + a/10;

    a = b%5;
    count = count + b/5;

    b = a%1;
    count = count + a/1;

    cout << count <<endl;

  }
  return 0;
}