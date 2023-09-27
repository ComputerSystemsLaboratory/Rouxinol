#include <iostream>
using namespace std;
int main(){

  while(1) {

  int price;
  cin >> price;
  if (price == 0) break;
  int otsuri = 1000 - price;
  int nCoin = 0;
  nCoin += otsuri/500;
    otsuri = otsuri % 500;

  nCoin += otsuri/100;
  otsuri = otsuri % 100;

  nCoin += otsuri/50;
  otsuri = otsuri % 50;

  nCoin += otsuri/10;
  otsuri = otsuri % 10;

    nCoin += otsuri/5;
  otsuri = otsuri % 5;
  nCoin += otsuri;

  cout << nCoin << endl;
}

    }

