#include<iostream>
#include<utility>

int main(){
  unsigned int a,b,tmp,GCD;
  while ( std::cin >> a >> b){
   unsigned long int LCM = a;
   GCD = b;
    if( GCD > a )std::swap( a , GCD );
    while(a % GCD != 0){
      tmp = a % GCD;
      a = GCD;
      GCD = tmp;
    }
    LCM = ( LCM / GCD ) * b;
    std::cout << GCD << " " << LCM << std::endl;
  }
  return 0;
}