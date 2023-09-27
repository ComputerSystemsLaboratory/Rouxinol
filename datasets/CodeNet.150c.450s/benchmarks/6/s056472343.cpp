#include <iostream>
using namespace std;
int main (){
  int a,b,c;
  cin >> a >> b >> c;
  if (a<b && b<c) cout << "Yes" <<endl;
  if ((a>=b && b<=c) || (a<=b && b>=c) || (a==b && b==c)) cout << "No" <<endl;
 return 0;
}