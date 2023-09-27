#include<iostream>
using namespace std;

int main(){
  int A=0,a,B=0,b;

  for(int i=0;i<4;i++)cin >> a, A+=a;
  for(int i=0;i<4;i++)cin >> b, B+=b;

  if(A>B)cout << A << endl;
  else cout << B << endl;
}