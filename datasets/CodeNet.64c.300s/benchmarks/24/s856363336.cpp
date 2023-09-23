#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int ina, inb, n;
  cin >> n;
  while(n != 0){
    int a=0, b=0;
    for(int i=0;i<n;i++){
      cin >> ina >> inb;
      if(ina > inb){
        a += ina+inb;
      }else if(ina < inb){
        b += ina+inb;
      }else{
        a += ina;
        b += inb;
      }
    }
    cout << a << " " << b << endl;
    cin >> n;
  }

  return 0;
}