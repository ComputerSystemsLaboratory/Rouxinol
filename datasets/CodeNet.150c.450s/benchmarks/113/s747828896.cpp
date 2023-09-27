#include <iostream>
int main(){
  int i = 0;
 while(true){
  ++i;
  int t;
  std::cin >> t;
  if( t == 0 ){ break; }
  std::cout << "Case " << i << ": " << t << std::endl;
 }
}