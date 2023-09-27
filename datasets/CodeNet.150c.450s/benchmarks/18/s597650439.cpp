#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
  int n;
  cin >> n;
  int price = 100000;
  for(int i = 0; i < n; i++){
    price *= 1.05;
  if(price % 1000 != 0) 
    price = price -(price % 1000) + 1000;
  }
  cout << price << endl;
}