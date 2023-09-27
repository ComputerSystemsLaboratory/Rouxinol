#include <iostream>
using namespace std;

int main()
{
  int n, i = 0;
  int car[10] = {};
  while(cin >> n){
    if(n == 0){
      cout << car[i - 1] << endl;
      car[i - 1] = 0;
      i--;
    }else{
      car[i] = n;
      i++;
    }
  }
}