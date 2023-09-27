#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int gcd(int a, int b){
  while(true){
    if(b>=a){
      swap(a, b);
    }

    if(b==0){
      return a;
    }
    
    a = a%b;
  }
}	

int main(){
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;
  
  
}