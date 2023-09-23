#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
  int d;
  while(cin >> d){
    int sum = 0;
    for(int i=0;i<600/d;i++){
      sum += d*pow(i*d,2);
    }
    cout << sum << endl;
  }
}