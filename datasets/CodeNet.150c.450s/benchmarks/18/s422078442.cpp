#include <iostream>
using namespace std;
//1000未満切り上げ
int main(){
  int weeks;
  int debt = 100000;
  cin >> weeks;
  for(int i=0;i<weeks;i++){
    debt *= 1.05;
    if(debt%1000)
      debt += (1000 - debt%1000);
  }
  cout << debt <<endl;
}