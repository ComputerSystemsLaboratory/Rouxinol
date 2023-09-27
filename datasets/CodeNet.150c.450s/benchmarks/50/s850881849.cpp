#include<iostream>
using namespace std;

int main(){

  int sum;
  int cash;

  while(cin >> cash , cash){
    cash = 1000-cash;
    sum = 0;
    sum += cash/500; cash%=500;
    sum += cash/100; cash%=100;
    sum += cash/50; cash%=50;
    sum += cash/10; cash%=10;
    sum += cash/5; cash%=5;
    sum += cash/1;
    
    cout<< sum << endl;
  }

  return 0;
}