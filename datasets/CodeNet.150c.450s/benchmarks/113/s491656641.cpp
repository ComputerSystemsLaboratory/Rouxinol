#include <iostream>

using namespace std;

int main(void){
  int x,i=1;

  while(1){
    cin >> x;
    if(x!=0){
      cout << "Case" << ' ' << i << ':' << ' ' << x << endl;
      i++;
    } else break;
  }
}