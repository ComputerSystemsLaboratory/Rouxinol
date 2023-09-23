#include <iostream>
using namespace std;

int main (){

  int a,b,c;

  cin >>  a >> b >> c;
  
  if (a<b && b<c)  cout << "Yes" <<'\n';
  else if (!(a<b && b<c))  cout << "No"   <<'\n';
 
  return 0;

}