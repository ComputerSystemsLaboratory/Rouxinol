#include<iostream>
using namespace std;

int main(void){

  int debt,week,i;
  debt = 100000;

  cin >> week;

  for(i=0; i<week; i++){
    debt = debt * 1.05;
    if(debt % 1000 > 0){
      debt += 1000 - (debt % 1000);
    }
  }

  cout << debt << endl;
  return 0;

}