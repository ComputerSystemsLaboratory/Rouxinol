#include <iostream>
using namespace std;
int gcd(int a, int b){
  while(true){
    if(a % b == 0){
      return b;
    }
    int tmp = a % b;
    a = b;b = tmp;
  }
  
}
int main(){
  int a,b;
  cin>>a>>b;
  cout << gcd(a,b) << endl;
}
