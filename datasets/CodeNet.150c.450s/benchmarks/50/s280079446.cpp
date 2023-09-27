#include<iostream>
using namespace std;

int main(){

  int n,count;

  while(cin >> n, n){

    count = 0;
    n = 1000 - n;

    if(n >= 500){
      count++;
      n -= 500;
    }

    while(n >= 100){
      count++;
      n -= 100;
    }

    while(n >= 50){
      count++;
      n -= 50;
    }

    while(n >= 10){
      count++;
      n -= 10;
    }

    while(n >= 5){
      count++;
      n -= 5;
    }

    cout << n+count << endl;

  }
}