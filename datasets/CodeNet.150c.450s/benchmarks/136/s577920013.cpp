#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int a,b;
  while(cin >> a >> b){
    int gcd = __gcd(a,b);
    cout << gcd << " " << a/gcd*b << endl;
  }
}