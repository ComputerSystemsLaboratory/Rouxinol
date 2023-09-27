#include<iostream>

using namespace std;

int main(){
  typedef long int li;
  li a = 100000,b;
  int n;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    a = a * 1.05;
    b = a%1000;
    if(b != 0) a = a - b + 1000;
  }
  cout << a << endl;
}