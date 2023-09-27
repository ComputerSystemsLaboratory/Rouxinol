#include<iostream>
using namespace std;
int main(){
 int a, b, mennseki, nagasa;
 cin >> a >> b;

 if( 1 <= a && b <= 100 ){
  mennseki = a*b;
  nagasa = a+a+b+b;
  cout << mennseki << " " << nagasa << endl;
 }

 return 0;
}