#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

void calc_m(int *Money, int n){
  int org = 100000;
  Money[0] = org;
  for(int i=1;i<100;i++){
    Money[i] = Money[i-1]*1.05;
    double tmp = ceil((double)Money[i]*pow(10.0, -3));
    Money[i] = (int)tmp*pow(10.0, 3);
  }
}
  

int main(){

  int Money[100];
  calc_m(Money, 100);
  
  int n;
  
  while(cin >> n){
    cout << Money[n] << endl;
  }

} 