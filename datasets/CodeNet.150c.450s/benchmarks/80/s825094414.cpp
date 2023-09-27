#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
  int suma = 0, sumb = 0;
  int tmp;
  for (int i = 0; i < 4; i++) {
    cin >> tmp;
    suma += tmp;
  }
  for (int i = 0; i < 4; i++) {
    cin >> tmp;
    sumb += tmp;
  }

  if(suma > sumb){
    std::cout << suma << std::endl;
  }else{
    std::cout << sumb << std::endl;    
  }

  return 0;
}