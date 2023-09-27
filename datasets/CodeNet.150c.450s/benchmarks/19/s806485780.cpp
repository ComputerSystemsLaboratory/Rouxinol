#include <iostream>
int main(){
while(true){
 int a;
 int b;
 std::cin >> a >> b;
 if(a==0 && b==0) { break; }
 if( a > b ){
  int t = static_cast<int&&>(a);
  a = static_cast<int&&>(b);
  b = static_cast<int&&>(t);
 }
 std::cout << a << " " << b << std::endl;
}
}