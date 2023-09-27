#include<iostream>

using namespace std;

int a,b,temp;
int gcd(int a,int b){
  return (a%b==0) ? b : gcd(b,a%b);
}
int main(){
  cin >> a >> b;
  if(a < b){
    temp = b;
    b = a;
    a = temp;
  }
  cout << gcd(a,b) << endl;
}