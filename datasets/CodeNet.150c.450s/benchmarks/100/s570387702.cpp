#include <iostream>
using namespace std;
typedef long long int lli;

lli fact(lli a){
  if(a==0)
    return 1;
  else
    return a*fact(a-1);
}

int main(){
  lli c;
  cin >> c;
  cout << fact(c) << endl;
}