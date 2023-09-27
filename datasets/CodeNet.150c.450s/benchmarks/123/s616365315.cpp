#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
using namespace std;


int main(void){
  int N, sum = 0;
  cin >> N;
  for(int i=0;i<N;i++){
    int val;
    cin >> val;
    int j;
    for(j=2;j<=sqrt(val) + 1;j++){
      if(val % j == 0){
        break;
      }
    }
    if(j == sqrt(val) + 1 || j > sqrt(val)){
      sum++;
    }
  }
  cout << sum << endl;
  return 0;
}