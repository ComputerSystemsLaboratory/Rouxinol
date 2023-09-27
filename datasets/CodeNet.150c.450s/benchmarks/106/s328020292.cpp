#include <iostream>

int main(){
int a,b,c;
int counter=0;
std::cin >> a >> b >> c;

 for(int x = a; x<=b; x++){
  if(c%x == 0){ counter++;}
 }
std::cout << counter << std::endl;
}